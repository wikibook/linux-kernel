# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            Xorg-448   [003] ..s.   132.999809: _raw_spin_lock_irqsave+0xd0/0x12c: [+] start spin_lock[ba385d00] owner: 0xcf45, next: 0xcf45 ,process:b5f89e00 
            Xorg-448   [003] d.s.   132.999811: _raw_spin_lock_irqsave+0x8c/0x12c: [+] end spin_lock[ba385d00] owner: 0xcf45, next: 0xcf46, process:b5f89e00 
            Xorg-448   [003] d.s.   132.999818: _raw_spin_unlock_irqrestore+0x14/0x120 <-update_blocked_averages+0x548/0x700
            Xorg-448   [003] d.s.   132.999830: <stack trace>
 => run_rebalance_domains+0x214/0x238
 => __do_softirq+0x174/0x3d8
 => irq_exit+0xe4/0x140
 => __handle_domain_irq+0x70/0xc4
 => bcm2836_arm_irqchip_handle_irq+0xac/0xb0
 => __irq_svc+0x5c/0x7c
 => _raw_spin_unlock_irqrestore+0xd8/0x120
 => _raw_spin_unlock_irqrestore+0xd8/0x120
 => sys_epoll_wait+0x30c/0x43c
 => ret_fast_syscall+0x0/0x28