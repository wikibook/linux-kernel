# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-887   [000] .... 11824.891592: sys_enter: NR 120 (1200011, 0, 0, 0, 76f88068, 0)
            bash-887   [000] .... 11824.893365: sys_exit: NR 120 = 894
            bash-887   [000] .... 11824.893835: sys_enter: NR 3 (3, 7ec6b0f0, 200, 0, 76f71000, 0)
            bash-887   [000] .... 11824.893852: sys_exit: NR 3 = 512