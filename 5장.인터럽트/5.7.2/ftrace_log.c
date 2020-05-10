# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] d...  4486.577315: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=20114 next_prio=120
     kworker/0:2-20114 [000] d.h.  4486.577335: irq_handler_entry: irq=162 name=arch_timer
     kworker/0:2-20114 [000] d.h.  4486.577340: irq_handler_exit: irq=162 ret=handled
     kworker/0:2-20114 [000] d.h.  4486.577344: irq_handler_entry: irq=17 name=3f00b880.mailbox
     kworker/0:2-20114 [000] d.h.  4486.577346: irq_handler_exit: irq=17 ret=handled
     kworker/0:2-20114 [000] d...  4486.577377: sched_switch: prev_comm=kworker/0:2 prev_pid=20114 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120