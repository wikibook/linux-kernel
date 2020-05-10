# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
    kworker/u8:0-1119  [001] d...  2772.154341: ttwu_do_wakeup+0x10/0x1a4 <-ttwu_do_activate+0x80/0x84
    kworker/u8:0-1119  [001] d...  2772.154378: <stack trace>
 => wake_up_state+0x1c/0x20
 => signal_wake_up_state+0x34/0x48
 => complete_signal+0x114/0x248
 => __send_signal+0x160/0x420
 => send_signal+0x48/0x98
 => do_send_sig_info+0x50/0x7c
 => group_send_sig_info+0x50/0x54
 => __kill_pgrp_info+0x4c/0x7c
 => kill_pgrp+0x44/0x74
 => __isig+0x34/0x40
 => isig+0x54/0x104
 => n_tty_receive_signal_char+0x28/0x70
 => n_tty_receive_char_special+0xa10/0xb78
 => n_tty_receive_buf_common+0x610/0xc04
 => n_tty_receive_buf2+0x24/0x2c
 => tty_ldisc_receive_buf+0x30/0x6c
 => tty_port_default_receive_buf+0x48/0x68
 => flush_to_ldisc+0xb4/0xcc
 => process_one_work+0x224/0x518
 => worker_thread+0x60/0x5f0
 => kthread+0x144/0x174
 => ret_from_fork+0x14/0x28
    kworker/u8:0-1119  [001] d...  2772.154381: sched_wakeup: comm=RPi_signal pid=1127 prio=120 target_cpu=001
    kworker/u8:0-1119  [001] d...  2772.154384: signal_generate: sig=2 errno=0 code=128 comm=RPi_signal pid=1127 grp=1 res=0
...
    kworker/u8:0-1119  [001] d...  2772.154422: sched_switch: prev_comm=kworker/u8:0 prev_pid=1119 prev_prio=120 prev_state=R+ ==> next_comm=RPi_signal next_pid=1127 next_prio=120
      RPi_signal-1127  [001] ....  2772.154427: sys_exit: NR 29 = -514
      RPi_signal-1127  [001] d...  2772.154432: dequeue_signal+0x14/0x19c <-get_signal+0x104/0x72c
      RPi_signal-1127  [001] d...  2772.154447: <stack trace>
 => do_work_pending+0xb4/0xcc
 => slow_work_pending+0xc/0x20
      RPi_signal-1127  [001] d...  2772.154457: signal_deliver: sig=2 errno=0 code=128 sa_handler=10510 sa_flags=4000000
      RPi_signal-1127  [001] ....  2772.154500: setup_return+0x160/0x264: [+] handler:0x10510, sig: 2
...
      RPi_signal-1127  [001] ....  2772.154684: sys_enter: NR 119 (d, 0, 1, 0, 10714, 0)
      RPi_signal-1127  [001] ....  2772.154688: sys_sigreturn+0x14/0xdc <-__sys_trace_return+0x0/0x10