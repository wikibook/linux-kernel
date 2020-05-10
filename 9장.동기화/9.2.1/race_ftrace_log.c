# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 CompositorTileW-3064  [003] ....  1396.127136: do_exit+0x850/0xc18 [+] comm: CompositorTileW, pid: 3064, global_func_exe_times: 111
 CompositorTileW-3064  [003] ....  1396.127139: trace_function_dummy_call+0x14/0x58 <-do_exit+0x890/0xc18
 GpuMemoryThread-3061  [000] ....  1396.127141: do_exit+0x850/0xc18 [+] comm: GpuMemoryThread, pid: 3061, global_func_exe_times: 111
 GpuMemoryThread-3061  [000] ....  1396.127144: trace_function_dummy_call+0x14/0x58 <-do_exit+0x890/0xc18
 CompositorTileW-3064  [003] ....  1396.127169: <stack trace>
 => get_signal+0x35c/0x69c
 => do_signal+0x74/0x3d4
 => do_work_pending+0xb4/0xcc
 => slow_work_pending+0xc/0x20
 GpuMemoryThread-3061  [000] ....  1396.127170: <stack trace>
 => get_signal+0x35c/0x69c
 => do_signal+0x74/0x3d4
 => do_work_pending+0xb4/0xcc
 => slow_work_pending+0xc/0x20
 CompositorTileW-3064  [003] ....  1396.127172: trace_function_dummy_call+0x0/0x58 [++] comm:CompositorTileW, pid:3064, from(do_exit+0x890/0xc18) 
 GpuMemoryThread-3061  [000] ....  1396.127174: trace_function_dummy_call+0x0/0x58 [++] comm:GpuMemoryThread, pid:3061, from(do_exit+0x890/0xc18) 
 chromium-browse-3058  [001] ....  1396.127178: do_exit+0x980/0xc18 [-] comm: chromium-browse, pid: 3058, global_func_exe_times: 113