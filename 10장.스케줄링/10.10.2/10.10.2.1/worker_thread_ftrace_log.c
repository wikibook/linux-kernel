# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
    kworker/u8:0-1128  [001] ....  8632.128947: schedule+0x10/0xa8 <-worker_thread+0x104/0x5f0
    kworker/u8:0-1128  [001] ....  8632.128961: <stack trace>
 => ret_from_fork+0x14/0x28
    kworker/u8:0-1128  [001] d...  8632.128968: sched_switch: prev_comm=kworker/u8:0 prev_pid=1128 prev_prio=120 prev_state=R+ ==> next_comm=lxterminal next_pid=840 next_prio=120