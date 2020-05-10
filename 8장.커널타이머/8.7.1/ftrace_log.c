# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
       rcu_sched-8     [001] ....   211.360650: timer_init: timer=b9e7bed0
       rcu_sched-8     [001] d...   211.360652: timer_start: timer=b9e7bed0 function=process_timeout expires=4294958434 [timeout=1] cpu=1 idx=0 flags=
...	   
      Compositor-1170  [001] d.s.   211.380620: timer_cancel: timer=b9e7bed0
      Compositor-1170  [001] ..s.   211.380621: timer_expire_entry: timer=b9e7bed0 function=process_timeout now=4294958435
      Compositor-1170  [001] .ns.   211.380630: timer_expire_exit: timer=b9e7bed0