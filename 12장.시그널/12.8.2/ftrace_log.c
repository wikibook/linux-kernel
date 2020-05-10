# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-833   [003] ....  3742.555094: sys_enter: NR 37 (4d8, 9, 0, 5a7cf300, 4d8, f9ef8)
            bash-833   [003] d...  3742.555125: ttwu_do_wakeup+0x10/0x1a4 <-ttwu_do_activate+0x80/0x84
            bash-833   [003] d...  3742.555151: <stack trace>
 => wake_up_state+0x1c/0x20
 => signal_wake_up_state+0x34/0x48
 => complete_signal+0x204/0x248
 => __send_signal+0x160/0x420
 => send_signal+0x48/0x98
 => do_send_sig_info+0x50/0x7c
 => group_send_sig_info+0x50/0x54
 => kill_pid_info+0x40/0x54
 => sys_kill+0x11c/0x1c4
 => __sys_trace_return+0x0/0x10
            bash-833   [003] d...  3742.555155: sched_wakeup: comm=bash pid=1240 prio=120 target_cpu=003
            bash-833   [003] d...  3742.555159: signal_generate: sig=9 errno=0 code=0 comm=bash pid=1240 grp=1 res=0
            bash-833   [003] ....  3742.555161: sys_exit: NR 37 = 0
...			
            bash-833   [003] d...  3742.557372: sched_switch: prev_comm=bash prev_pid=833 prev_prio=120 prev_state=D ==> next_comm=bash next_pid=1240 next_prio=120
            bash-1240  [003] ....  3742.557387: sys_exit: NR 335 = -514
            bash-1240  [003] d...  3742.557391: dequeue_signal+0x14/0x19c <-get_signal+0x104/0x72c
            bash-1240  [003] d...  3742.557406: <stack trace>
 => do_work_pending+0xb4/0xcc
 => slow_work_pending+0xc/0x20
            bash-1240  [003] d...  3742.557411: signal_deliver: sig=9 errno=0 code=0 sa_handler=0 sa_flags=0
            bash-1240  [003] ....  3742.557425: do_exit+0x14/0xb60 <-do_group_exit+0x50/0xe4
            bash-1240  [003] ....  3742.557440: <stack trace>
 => do_signal+0x78/0x4dc
 => do_work_pending+0xb4/0xcc
 => slow_work_pending+0xc/0x20
            bash-1240  [003] ....  3742.558690: sched_process_exit: comm=bash pid=1240 prio=120		