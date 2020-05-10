# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
      lxterminal-840   [000] d...  8688.516171: ttwu_do_wakeup+0x10/0x1a4 <-ttwu_do_activate+0x80/0x84
      lxterminal-840   [000] d...  8688.516204: <stack trace>
 => wake_up_process+0x20/0x24
 => insert_work+0x8c/0xd4
 => __queue_work+0x1ac/0x51c
 => queue_work_on+0xa0/0xa4
 => tty_flip_buffer_push+0x3c/0x40
 => pty_write+0x84/0x88
 => n_tty_write+0x368/0x458
 => tty_write+0x1c8/0x2e4
 => __vfs_write+0x3c/0x13c
 => vfs_write+0xd4/0x214
 => sys_write+0x4c/0xa0
 => __sys_trace_return+0x0/0x10
      lxterminal-840   [000] d...  8688.516208: sched_wakeup: comm=kworker/u8:0 pid=1128 prio=120 target_cpu=000	  
      lxterminal-840   [000] d...  8688.516497: sched_switch: prev_comm=lxterminal prev_pid=840 prev_prio=120 prev_state=D ==> next_comm=Xorg next_pid=552 next_prio=120
            Xorg-552   [000] d...  8688.516757: sched_switch: prev_comm=Xorg prev_pid=552 prev_prio=120 prev_state=D ==> next_comm=lxterminal next_pid=840 next_prio=120	  
      lxterminal-840   [000] d...  8688.516900: sched_switch: prev_comm=lxterminal prev_pid=840 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:0 next_pid=1128 next_prio=120