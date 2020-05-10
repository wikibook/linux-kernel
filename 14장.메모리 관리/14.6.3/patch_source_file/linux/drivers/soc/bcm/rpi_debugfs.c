#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/platform_device.h>
#include <linux/reboot.h>
#include <linux/io.h>
#include <linux/init.h>
#include <linux/memblock.h>
#include <linux/slab.h>
#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/cpu.h>
#include <linux/delay.h>
#include <asm/setup.h>
#include <linux/input.h>
#include <linux/debugfs.h>
#include <linux/timer.h>
#include <linux/workqueue.h>
#include <linux/mutex.h>
#include <linux/slub_def.h>
#include <linux/uaccess.h>
#include <asm/memory.h>

uint32_t raspbian_debug_state = 0x1000;
static struct dentry *rpi_kernel_debug_debugfs_root;

static int rpi_kernel_debug_stat_get(void *data, u64 *val)
{
    printk("===[%s][L:%d][val:%d]===\n", __func__, __LINE__, raspbian_debug_state);
    *val = raspbian_debug_state;

    return 0;
}

static int rpi_kernel_debug_stat_set(void *data, u64 val)
{
    raspbian_debug_state = (uint32_t)val;

	if (raspbian_debug_state == 1402 ) {
		unsigned long phys_address, page_frame_num;
		struct page *page_ptr;

		void * func_ptr = schedule;
		unsigned long vir_address = (unsigned long)func_ptr;

		phys_address = __pa(vir_address);
		page_frame_num = virt_to_pfn(vir_address);

		page_ptr = virt_to_page(vir_address);

		trace_printk("[+]sym: %pS vir_address: 0x%lx phys_address: 0x%lx pfn: 0x%lx page_ptr:%p\n",
						func_ptr, vir_address, phys_address, page_frame_num, page_ptr);
	}
	
	if ( raspbian_debug_state == 1403 ) {
		struct page *mem1_page, *mem2_page;
		struct kmem_cache *k_cache_ptr;
    
		u32 *mem_ptr1, *mem_ptr2;
		
		mem_ptr1 = kmalloc(124, GFP_KERNEL);
		mem_ptr2 = kmalloc(44, GFP_KERNEL);
		
		memset(mem_ptr1, 0x78, 124);
		memset(mem_ptr2, 0x78, 44);
		
		trace_printk("[+]mem_ptr1: %p mem_ptr2: %p \n", 
								mem_ptr1, mem_ptr2);
		
		mem1_page = virt_to_head_page(mem_ptr1);
		trace_printk("[+]page: %p\n", mem1_page);
		
		if (PageSlab(mem1_page)) {
			k_cache_ptr = mem1_page->slab_cache; 
			trace_printk("[+][kmem_cache]name : %s, size : %x\n", k_cache_ptr->name, k_cache_ptr->size);
		} 
		
		mem2_page = virt_to_head_page(mem_ptr2);
		trace_printk("[+]page: %p\n", mem2_page);
		
		if (PageSlab(mem1_page)) {
			k_cache_ptr = mem2_page->slab_cache; 
			trace_printk("[+][kmem_cache]name : %s, size : %x\n", k_cache_ptr->name, k_cache_ptr->size);
		} 
		
		kfree(mem_ptr1);
		kfree(mem_ptr2);
	}	

    printk("[raspbian] [%s][L:%d], raspbian_debug_state[%lu],value[%lu]===\n", 
								__func__, __LINE__, (long unsigned int)raspbian_debug_state, (long unsigned int)val);

    return 0;
}


DEFINE_SIMPLE_ATTRIBUTE(rpi_kernel_debug_stat_fops, rpi_kernel_debug_stat_get, rpi_kernel_debug_stat_set, "%llu\n");

static int rpi_kernel_debug_debugfs_driver_probe(struct platform_device *pdev)
{
    printk("===[%s][L:%d]===\n", __func__, __LINE__);
    return 0;
}

static struct platform_driver rpi_kernel_debug_debugfs_driver = {
    .probe      = rpi_kernel_debug_debugfs_driver_probe,
    .driver     = {
        .owner  = THIS_MODULE,
        .name   = "rpi_debug",
    },
};

static int __init rpi_kernel_debug_debugfs_init(void)
{
    printk("===[%s][L:%d]===\n", __func__, __LINE__);

    rpi_kernel_debug_debugfs_root = debugfs_create_dir("rpi_debug", NULL);
    debugfs_create_file("val", S_IRUGO, rpi_kernel_debug_debugfs_root, NULL, &rpi_kernel_debug_stat_fops);

    return platform_driver_register(&rpi_kernel_debug_debugfs_driver);
}

late_initcall(rpi_kernel_debug_debugfs_init);

MODULE_DESCRIPTION("raspberrypi debug interface driver");
MODULE_AUTHOR("Austin Kim <austindh.kim@gmail.com>");
MODULE_LICENSE("GPL");
