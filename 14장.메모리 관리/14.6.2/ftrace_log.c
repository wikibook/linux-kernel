# tracer: function
#
# entries-in-buffer/entries-written: 108/108   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-863   [000] ....   742.800103: rpi_kernel_debug_stat_set+0x14/0x428 <-simple_attr_write+0xbc/0x104
            bash-863   [000] ....   742.800155: <stack trace>
 => rpi_kernel_debug_stat_set+0x18/0x428
 => simple_attr_write+0xbc/0x104
 => full_proxy_write+0x64/0x80
 => __vfs_write+0x4c/0x170
 => vfs_write+0xb4/0x1c0
 => ksys_write+0x5c/0xbc
 => sys_write+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed602d4
            bash-863   [000] ....   742.800168: rpi_kernel_debug_stat_set+0xa0/0x428: [+]sym: schedule+0x0/0xa8 vir_address: 0x807a0a8c phys_address: 0x7a0a8c pfn: 0x7a0 page_ptr:ba3b0280	
 