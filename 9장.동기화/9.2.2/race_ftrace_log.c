# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     kworker/3:1-3162  [003] ....  2048.406656: worker_thread+0x324/0x6cc <801386e4>: [+] comm: kworker/3:1, pid: 3162, global_func_exe_times: 34602 from(kthread+0x144/0x174) 
     kworker/1:2-1376  [001] ....  2048.406660: worker_thread+0x324/0x6cc <801386e4>: [+] comm: kworker/1:2, pid: 1376, global_func_exe_times: 34602 from(kthread+0x144/0x174) 
     kworker/3:1-3162  [003] ....  2048.406661: trace_function_dummy_call+0x0/0x58 <8067196c>: [++] comm:kworker/3:1, pid:3162, from(worker_thread+0x36c/0x6cc) 
     kworker/1:2-1376  [001] ....  2048.406663: trace_function_dummy_call+0x0/0x58 <8067196c>: [++] comm:kworker/1:2, pid:1376, from(worker_thread+0x36c/0x6cc) 
     kworker/1:2-1376  [001] ....  2048.406668: workqueue_execute_start: work struct ba361b18: function drain_local_pages_wq
     kworker/3:1-3162  [003] ....  2048.406668: workqueue_execute_start: work struct ba383b18: function drain_local_pages_wq
     kworker/3:1-3162  [003] ....  2048.406688: workqueue_execute_end: work struct ba383b18
     kworker/3:1-3162  [003] d...  2048.406692: worker_thread+0x370/0x6cc <80138730>: [-] comm: kworker/3:1, pid: 3162, global_func_exe_times: 34604 from(kthread+0x144/0x174) 
     kworker/1:2-1376  [001] ....  2048.406720: workqueue_execute_end: work struct ba361b18
     kworker/1:2-1376  [001] ....  2048.406726: workqueue_execute_start: work struct 958a5ab4: function wq_barrier_func
     kworker/1:2-1376  [001] ....  2048.406730: workqueue_execute_end: work struct 958a5ab4
     kworker/1:2-1376  [001] d...  2048.406732: worker_thread+0x370/0x6cc <80138730>: [-] comm: kworker/1:2, pid: 1376, global_func_exe_times: 34604 from(kthread+0x144/0x174)