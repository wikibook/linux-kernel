# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     kworker/0:1-31    [000] d.h.   592.790968: irq_handler_entry: irq=17 name=3f00b880.mailbox
     kworker/0:1-31    [000] d.h.   592.790970: bcm2835_mbox_irq <-__handle_irq_event_percpu
     kworker/0:1-31    [000] d.h.   592.791014: <stack trace>
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => schedule_timeout
 => schedule_timeout
 => wait_for_completion_timeout
 => mbox_send_message
 => rpi_firmware_transaction
 => rpi_firmware_property_list
 => rpi_firmware_property
 => rpi_firmware_get_throttled
 => get_throttled_poll
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
     kworker/0:1-31    [000] d.h.   592.791016: irq_handler_exit: irq=17 ret=handled
          <idle>-0     [003] dnh.   592.791033: sched_wakeup: comm=irq/17-3f00b880 pid=33 prio=49 target_cpu=003
          <idle>-0     [003] d...   592.791048: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/17-3f00b880 next_pid=33 next_prio=49
 irq/17-3f00b880-33    [003] ....   592.791052: bcm2835_mbox_threaded_irq <-irq_thread_fn
 irq/17-3f00b880-33    [003] ....   592.791064: <stack trace>
 => kthread
 => ret_from_fork
     kworker/0:1-31    [000] ....   592.791065: workqueue_execute_end: work struct b97a0d44
 irq/17-3f00b880-33    [003] ....   592.791073: bcm2835_mbox_threaded_irq: irq=17, process: irq/17-3f00b880 
 irq/17-3f00b880-33    [003] ....   592.791076: bcm2835_mbox_threaded_irq: [+] in_interrupt: 0x00000000,preempt_count = 0x00000000, stack=0xb9714000 
     kworker/0:1-31    [000] d...   592.791078: sched_switch: prev_comm=kworker/0:1 prev_pid=31 prev_prio=120 prev_state=t ==> next_comm=make next_pid=13395 next_prio=120 
