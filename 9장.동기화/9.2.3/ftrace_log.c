# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 TaskSchedulerFo-1796  [000] dns.  4183.573504: __kmalloc+0x2bc/0x3c0: [+] comm: TaskSchedulerFo, pid: 1796, kmalloc_times: 131380 from(__DWC_ALLOC_ATOMIC+0x24/0x28) 
 TaskSchedulerFo-1796  [000] dns.  4183.573504: trace_race_dummy_call+0x14/0x70 <-__kmalloc+0x348/0x3c0
 TaskSchedulerFo-1796  [000] dns.  4183.573504: <stack trace>
 => dwc_otg_hcd_qtd_create+0x2c/0x60
 => dwc_otg_hcd_urb_enqueue+0x58/0x208
 => dwc_otg_urb_enqueue+0x1fc/0x31c
 => usb_hcd_submit_urb+0xc8/0x934
 => usb_submit_urb+0x284/0x510
 => hid_irq_in+0x74/0x230
 => __usb_hcd_giveback_urb+0xa4/0x15c
 => usb_hcd_giveback_urb+0x4c/0xfc
 => completion_tasklet_func+0x80/0xac
 => tasklet_callback+0x20/0x24
 => tasklet_hi_action+0x70/0x104
 => __do_softirq+0x174/0x3d8
 => irq_exit+0xe4/0x140
 => __handle_domain_irq+0x70/0xc4
 => bcm2836_arm_irqchip_handle_irq+0xac/0xb0
 => __irq_svc+0x5c/0x7c
 => __rb_reserve_next+0xc4/0x1a0
 => __rb_reserve_next+0xc4/0x1a0
 => ring_buffer_lock_reserve+0x154/0x4a0
 => trace_vbprintk+0x168/0x2a8
 => __trace_bprintk+0x44/0x58
 => __kmalloc+0x30c/0x3c0
 => ext4_ext_remove_space+0x98c/0x143c
 => ext4_ext_truncate+0xa8/0xac
 => ext4_truncate+0x370/0x458
 => ext4_setattr+0x310/0x9d0
 => notify_change+0x270/0x3fc
 => do_truncate+0x90/0xb4
 => do_sys_ftruncate+0x12c/0x1c0
 => sys_ftruncate64+0x24/0x2c
 => ret_fast_syscall+0x0/0x28
 TaskSchedulerFo-1796  [000] dns.  4183.573504: trace_race_dummy_call+0x0/0x70: [++] comm:TaskSchedulerFo, pid:1796, in_interrupt(): 0x00000100,preempt_count = 0x00000100 
 TaskSchedulerFo-1796  [000] dns.  4183.573504: __kmalloc+0x25c/0x3c0: [-] comm: TaskSchedulerFo, pid: 1796, kmalloc_times: 131381 from(__DWC_ALLOC_ATOMIC+0x24/0x28) 
 TaskSchedulerFo-1796  [000] ....  4183.573765: __kmalloc+0x25c/0x3c0: [-] comm: TaskSchedulerFo, pid: 1796, kmalloc_times: 131382 from(ext4_ext_remove_space+0x98c/0x143c)