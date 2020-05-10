# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [001] d.h.   230.859933: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   230.859943: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d.h.   230.859993: <stack trace>
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
 