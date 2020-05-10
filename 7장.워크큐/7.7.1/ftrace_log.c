# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [002] d.s.   149.153334: workqueue_queue_work: work struct=ba372d70 function=vmstat_update workqueue=b9e33500 req_cpu=2 cpu=2
          <idle>-0     [002] d.s.   149.153336: workqueue_activate_work: work struct ba372d70
          <idle>-0     [002] dns.   149.153402: sched_wakeup: comm=kworker/2:2 pid=122 prio=120 target_cpu=002
          <idle>-0     [002] d...   149.153443: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=122 next_prio=120
     kworker/2:2-122   [002] ....   149.153452: workqueue_execute_start: work struct ba372d70: function vmstat_update
     kworker/2:2-122   [002] ....   149.153458: workqueue_execute_end: work struct ba372d70