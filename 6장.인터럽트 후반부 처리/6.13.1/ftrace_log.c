# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [001] dnh1   239.691099: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh1   239.691125: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] dnh1   239.691128: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] dnh1   239.691134: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] dnh1   239.691141: irq_handler_exit: irq=162 ret=handled		  
          <idle>-0     [001] .ns1   239.691153: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] .ns1   239.691204: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] .ns1   239.691205: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] .ns1   239.691217: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns1   239.691218: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] .ns1   239.691236: softirq_exit: vec=9 [action=RCU] 
