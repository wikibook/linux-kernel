# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [003] d.h.   328.473305: kmalloc: call_site=805ee260 caller(__DWC_ALLOC_ATOMIC+0x24/0x28) ptr=b7d93cc0 bytes_req=12 bytes_alloc=64 gfp_flags=GFP_ATOMIC|__GFP_ZERO
          <idle>-0     [003] ..s.   328.473324: kfree: call_site=805ee2c8 caller(__DWC_FREE+0x1c/0x20) ptr=b7d93cc0
