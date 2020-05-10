# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 VCHIQ completio-1630  [002] ....  9447.646780: schedule+0x10/0xa8 <-schedule_timeout+0x1e0/0x418
 VCHIQ completio-1630  [002] ....  9447.646829: <stack trace>
 => down_interruptible+0x5c/0x68
 => vchiq_ioctl+0x9d4/0x1950
 => do_vfs_ioctl+0xb0/0x7d0
 => sys_ioctl+0x44/0x6c
 => __sys_trace_return+0x0/0x10
 VCHIQ completio-1630  [002] d...  9447.646934: sched_switch: prev_comm=VCHIQ completio prev_pid=1630 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120