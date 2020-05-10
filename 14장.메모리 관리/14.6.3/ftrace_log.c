# tracer: function
#
# entries-in-buffer/entries-written: 8732/8732   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-863   [001] ....   301.320081: kmem_cache_alloc_trace+0x14/0x25c <-rpi_kernel_debug_stat_set+0x23c/0x428
            bash-863   [001] ....   301.320105: <stack trace>
 => kmem_cache_alloc_trace+0x18/0x25c
 => rpi_kernel_debug_stat_set+0x23c/0x428
 => simple_attr_write+0xbc/0x104
 => full_proxy_write+0x64/0x80
 => __vfs_write+0x4c/0x170
 => vfs_write+0xb4/0x1c0
 => ksys_write+0x5c/0xbc
 => sys_write+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed602d4
            bash-863   [001] ....   301.320107: kmalloc: call_site=80554994 ptr=7576a560 bytes_req=124 bytes_alloc=128 gfp_flags=GFP_KERNEL
            bash-863   [001] ....   301.320131: kmalloc: call_site=805549bc ptr=811a4f70 bytes_req=44 bytes_alloc=64 gfp_flags=GFP_KERNEL
            bash-863   [001] ....   301.320141: rpi_kernel_debug_stat_set+0x220/0x428: [+]mem_ptr1: 7576a560 mem_ptr2: 811a4f70 
            bash-863   [001] ....   301.320144: rpi_kernel_debug_stat_set+0x220/0x428: [+]page: 45b1cfc2
            bash-863   [001] ....   301.320149: rpi_kernel_debug_stat_set+0x2ec/0x428: [+][kmem_cache]name : kmalloc-128, size : 80