# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
      lxterminal-876   [001] ....   107.389671: mutex_lock+0xcc/0x130: [+][fastpath] mutex_lock[b5bbf504] start.. owner:0, current_process:ac136900
      lxterminal-876   [001] ....   107.389673: mutex_lock+0x94/0x130: [+][fastpath] mutex_lock[b5bbf504] end.. owner:ac136900, current_process:ac136900
      lxterminal-876   [001] ....   107.389674: mutex_unlock+0x14/0x104 <-unix_stream_read_generic+0x1a0/0x8ac
      lxterminal-876   [001] ....   107.389682: <stack trace>
 => sock_recvmsg+0x28/0x2c
 => ___sys_recvmsg+0xa0/0x124
 => __sys_recvmsg+0x70/0x16c
 => sys_recvmsg+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
      lxterminal-876   [001] ....   107.389684: mutex_unlock+0xc4/0x104: [-][fastpath] mutex_unlock[b5bbf504] start.. owner:ac136900, current_process:ac136900
      lxterminal-876   [001] ....   107.389686: mutex_unlock+0x8c/0x104: [-][fastpath] mutex_unlock[b5bbf504] end.. owner:0, current_process:ac136900