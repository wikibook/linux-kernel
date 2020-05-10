# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     kworker/2:1-1106  [002] d...  7831.602384: sched_switch: prev_comm=kworker/2:1 prev_pid=1106 prev_prio=120 prev_state=T ==> next_comm=ksoftirqd/2 next_pid=19 next_prio=120
...
         lxpanel-718   [002] d...  7831.739767: sched_wakeup: comm=Xorg pid=552 prio=120 target_cpu=002
         lxpanel-718   [002] d...  7831.739824: sched_switch: prev_comm=lxpanel prev_pid=718 prev_prio=120 prev_state=D ==> next_comm=Xorg next_pid=552 next_prio=120