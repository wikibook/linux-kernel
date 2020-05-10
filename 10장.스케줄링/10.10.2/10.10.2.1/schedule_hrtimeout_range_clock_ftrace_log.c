# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
      lxterminal-840   [001] ....  8632.128798: schedule+0x10/0xa8 <-schedule_hrtimeout_range_clock+0xd8/0x14c
      lxterminal-840   [001] ....  8632.128816: <stack trace>
 => poll_schedule_timeout+0x54/0x84
 => do_sys_poll+0x3d8/0x500
 => sys_poll+0x74/0x114
 => __sys_trace_return+0x0/0x10
      lxterminal-840   [001] d...  8632.128827: sched_switch: prev_comm=lxterminal prev_pid=840 prev_prio=120 prev_state=D ==> next_comm=sched_basic.sh next_pid=1153 next_prio=120