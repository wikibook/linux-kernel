# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
           <...>-3106  [001] ....  1342.119405: do_exit+0x850/0xc18 <80122144>: [+] comm: TaskSchedulerRe, pid: 3106, global_func_exe_times: 43
           <...>-3106  [001] ....  1342.119407: trace_function_dummy_call+0x14/0x58 <80671980> <-do_exit+0x890/0xc18 <80122184>
           <...>-3106  [001] ....  1342.119423: <stack trace>
 => get_signal+0x35c/0x69c <8012da34>
 => do_signal+0x300/0x3d4 <8010b4ec>
 => do_work_pending+0xb4/0xcc <8010b7a4>
 => slow_work_pending+0xc/0x20 <80108034>
           <...>-3106  [001] ....  1342.119427: trace_function_dummy_call+0x0/0x58 <8067196c>: [++] comm:TaskSchedulerRe, pid:3106, from(do_exit+0x890/0xc18) 
           <...>-3106  [001] ....  1342.119431: do_exit+0x980/0xc18 <80122274>: [-] comm: TaskSchedulerRe, pid: 3106, global_func_exe_times: 44