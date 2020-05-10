# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         | 
     simple_exit-896   [003] ....   330.985283: sys_enter: NR 64 (0, 7ec6b5f8, 10, 1, 37e, 0)
     simple_exit-896   [003] ....   330.985286: sys_exit: NR 64 = 894
     simple_exit-896   [003] ....   330.985434: sys_enter: NR 20 (37e, 7ec6b5f8, 10, 1, 37e, 0)
     simple_exit-896   [003] ....   330.985436: sys_exit: NR 20 = 896		  
     simple_exit-896   [003] ....   330.985631: sys_enter: NR 4 (1, 32c008, 23, 0, 23, 32c008)
     simple_exit-896   [003] ....   330.985644: sys_exit: NR 4 = 35		  
     simple_exit-896   [003] ....   330.985816: sys_enter: NR 162 (7ec6b5f8, 7ec6b5f8, 10, 2, 0, 7ec6b5f8)	 
     simple_exit-896   [003] ....   332.985960: sys_exit: NR 162 = 0
     simple_exit-896   [003] ....   332.986414: sys_enter: NR 248 (0, 0, 0, ffffffff, 1, 0)
     simple_exit-896   [003] ....   332.986418: do_exit+0x14/0xb60 <-do_group_exit+0x50/0xe4	 
     simple_exit-896   [003] ....   332.986446: <stack trace>
 => __sys_trace_return+0x0/0x10
     simple_exit-896   [003] ....   332.986848: sched_process_exit: comm=simple_exit pid=896 prio=120