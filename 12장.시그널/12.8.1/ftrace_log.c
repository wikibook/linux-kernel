# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-833   [003] d...  3742.555155: sched_wakeup: comm=bash pid=1240 prio=120 target_cpu=003
            bash-833   [003] d...  3742.555159: signal_generate: sig=9 errno=0 code=0 comm=bash pid=1240 grp=1 res=0
            bash-833   [003] ....  3742.555161: sys_exit: NR 37 = 0
... 
            bash-833   [003] d...  3742.557372: sched_switch: prev_comm=bash prev_pid=833 prev_prio=120 prev_state=D ==> next_comm=bash next_pid=1240 next_prio=120
            bash-1240  [003] ....  3742.557387: sys_exit: NR 335 = -514
            bash-1240  [003] d...  3742.557411: signal_deliver: sig=9 errno=0 code=0 sa_handler=0 sa_flags=0