# tracer: function
#
# entries-in-buffer/entries-written: 79160/183089   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] d.h.  1524.282287: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.  1524.282291: bcm2835_mmc_irq+0x14/0x754 <-__handle_irq_event_percpu+0xbc/0x224
          <idle>-0     [000] d.h.  1524.282331: <stack trace>
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
 => arch_cpu_idle+0x34/0x4c
 => arch_cpu_idle+0x34/0x4c
 => default_idle_call+0x34/0x48
 => do_idle+0xf0/0x17c
 => cpu_startup_entry+0x28/0x2c
 => rest_init+0xc0/0xc4
 => start_kernel+0x490/0x4b8
          <idle>-0     [000] d.h.  1524.282342: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] dnh.  1524.282358: sched_wakeup: comm=irq/86-mmc1 pid=69 prio=49 target_cpu=000
          <idle>-0     [000] d...  1524.282376: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=69 next_prio=49
     irq/86-mmc1-69    [000] ....  1524.282383: bcm2835_mmc_thread_irq+0x10/0x90 <-irq_thread_fn+0x2c/0x8c
     irq/86-mmc1-69    [000] ....  1524.282395: <stack trace>
 => bcm2835_mmc_thread_irq+0x14/0x90
 => irq_thread_fn+0x2c/0x8c
 => irq_thread+0x154/0x238
 => kthread+0x140/0x170
 => ret_from_fork+0x14/0x28