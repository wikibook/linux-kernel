# tracer: function
#
# entries-in-buffer/entries-written: 58150/61038   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] d.h.   826.627311: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   826.627313: bcm2835_mmc_irq+0x14/0x754 <-__handle_irq_event_percpu+0xbc/0x224
          <idle>-0     [000] d.h.   826.627350: <stack trace>
 => bcm2835_mmc_irq+0x18/0x754
 => __handle_irq_event_percpu+0xbc/0x224
 => handle_irq_event_percpu+0x3c/0x8c
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xc0/0x16c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x38/0x50
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => finish_task_switch+0xa8/0x230
 => finish_task_switch+0xa8/0x230
 => __schedule+0x328/0x9b0
 => schedule_idle+0x44/0x84
 => do_idle+0x120/0x17c
 => cpu_startup_entry+0x28/0x2c
 => rest_init+0xc0/0xc4
 => start_kernel+0x490/0x4b8
          <idle>-0     [000] d.h.   826.627355: irq_handler_exit: irq=86 ret=handled
