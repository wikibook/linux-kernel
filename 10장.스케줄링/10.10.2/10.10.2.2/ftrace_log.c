# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 chromium-browse-1436  [000] d.h.  9448.149965: irq_handler_entry: irq=86 name=mmc1
 chromium-browse-1436  [000] d.h.  9448.149972: irq_handler_exit: irq=86 ret=handled
 chromium-browse-1436  [000] d.h.  9448.149982: ttwu_do_wakeup+0x10/0x1a4 <-ttwu_do_activate+0x80/0x84
 chromium-browse-1436  [000] d.h.  9448.150003: <stack trace>
 => wake_up_process+0x20/0x24
 => __irq_wake_thread+0x70/0x74
 => __handle_irq_event_percpu+0x84/0x224
 => handle_irq_event_percpu+0x2c/0x68
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xb4/0x160
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x38/0x50
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0xac/0xb0
 => __irq_usr+0x4c/0x60
 => 0x4228e4c
 chromium-browse-1436  [000] dnh.  9448.150005: sched_wakeup: comm=irq/86-mmc1 pid=65 prio=49 target_cpu=000
 chromium-browse-1436  [000] dn..  9448.150010: schedule+0x10/0xa8 <-do_work_pending+0x38/0xcc
 chromium-browse-1436  [000] dn..  9448.150016: <stack trace>
 chromium-browse-1436  [000] d...  9448.150028: sched_switch: prev_comm=chromium-browse prev_pid=1436 prev_prio=120 prev_state=S ==> next_comm=irq/86-mmc1 next_pid=65 next_prio=49