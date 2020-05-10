# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     kworker/3:1-3162  [003] ....  2048.385285: worker_thread+0x324/0x6cc <801386e4>: [+] comm: kworker/3:1, pid: 3162, global_func_exe_times: 34594 from(kthread+0x144/0x174) 
     kworker/3:1-3162  [003] ....  2048.385287: trace_function_dummy_call+0x0/0x58 <8067196c>: [++] comm:kworker/3:1, pid:3162, from(worker_thread+0x36c/0x6cc) 
     kworker/3:1-3162  [003] ....  2048.385289: workqueue_execute_start: work struct ba383c8c: function lru_add_drain_per_cpu
     kworker/3:1-3162  [003] ....  2048.385293: workqueue_execute_end: work struct ba383c8c
     kworker/3:1-3162  [003] d...  2048.385296: worker_thread+0x370/0x6cc <80138730>: [-] comm: kworker/3:1, pid: 3162, global_func_exe_times: 34595 from(kthread+0x144/0x174)