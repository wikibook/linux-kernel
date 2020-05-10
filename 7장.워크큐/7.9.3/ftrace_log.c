# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] d.h.  1571.189380: irq_handler_entry: irq=17 name=3f00b880.mailbox
          <idle>-0     [000] d.h.  1571.189389: workqueue_queue_work: work struct=80d188a0 function=bcm2835_mbox_work_callback workqueue=b9c06300 req_cpu=4 cpu=0
          <idle>-0     [000] d.h.  1571.189392: workqueue_activate_work: work struct 80d188a0
          <idle>-0     [000] d.h.  1571.189395: insert_work <-__queue_work
          <idle>-0     [000] d.h.  1571.189449: <stack trace>
 => bcm2835_mbox_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
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
     kworker/2:0-1452  [002] d...  1571.189449: sched_switch: prev_comm=kworker/2:0 prev_pid=1452 prev_prio=120 prev_state=t ==> next_comm=Compositor next_pid=1611 next_prio=120
          <idle>-0     [000] dnh.  1571.189459: sched_wakeup: comm=kworker/0:3 pid=1677 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  1571.189462: irq_handler_exit: irq=17 ret=handled
          <idle>-0     [000] d...  1571.189478: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=1677 next_prio=120
     kworker/0:3-1677  [000] ....  1571.189485: workqueue_execute_start: work struct 80d188a0: function bcm2835_mbox_work_callback
     kworker/0:3-1677  [000] ....  1571.189488: bcm2835_mbox_work_callback <-process_one_work
     kworker/0:3-1677  [000] ....  1571.189505: <stack trace>
 => kthread
 => ret_from_fork
     kworker/0:3-1677  [000] ....  1571.189514: bcm2835_mbox_work_callback: current process: kworker/0:3
     kworker/0:3-1677  [000] ....  1571.189520: bcm2835_mbox_work_callback: [+] in_interrupt:0x00000000,preempt_count = 0x00000000, stack=0xb7d46000 
     kworker/0:3-1677  [000] d...  1571.189729: mod_timer <-add_timer
     kworker/0:3-1677  [000] d...  1571.189750: <stack trace>
 => queue_delayed_work_on
 => bcm2835_mbox_work_callback
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
     kworker/0:3-1677  [000] d...  1571.189756: timer_start: timer=80d188c0 function=delayed_work_timer_fn expires=127129 [timeout=10] cpu=0 idx=35 flags=I
     kworker/0:3-1677  [000] ....  1571.189761: workqueue_execute_end: work struct 80d188a0
     kworker/0:3-1677  [000] d...  1571.189800: sched_switch: prev_comm=kworker/0:3 prev_pid=1677 prev_prio=120 prev_state=t ==> next_comm=swapper/0 next_pid=0 next_prio=120
...
          <idle>-0     [000] d.h.  1571.294580: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.  1571.294602: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.s.  1571.294610: timer_cancel: timer=80d188c0
 chromium-browse-948   [003] d.h.  1571.294613: irq_handler_exit: irq=17 ret=handled
          <idle>-0     [000] d.s.  1571.294614: timer_expire_entry: timer=80d188c0 function=delayed_work_timer_fn now=127130
          <idle>-0     [000] d.s.  1571.294617: delayed_work_timer_fn <-call_timer_fn
          <idle>-0     [000] d.s.  1571.294676: <stack trace>
 => run_timer_softirq
 => __do_softirq
 => irq_exit
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
          <idle>-0     [000] d.s.  1571.294685: workqueue_queue_work: work struct=80d188b0 function=bcm2835_mbox_delayed_work_callback workqueue=b9c06300 req_cpu=4 cpu=0
          <idle>-0     [000] d.s.  1571.294687: workqueue_activate_work: work struct 80d188b0
          <idle>-0     [000] d.s.  1571.294689: insert_work <-__queue_work
          <idle>-0     [000] d.s.  1571.294717: <stack trace>
 => call_timer_fn
 => expire_timers
 => run_timer_softirq
 => __do_softirq
 => irq_exit
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
          <idle>-0     [000] dns.  1571.294736: sched_wakeup: comm=kworker/0:3 pid=1677 prio=120 target_cpu=000
          <idle>-0     [000] dns.  1571.294740: timer_expire_exit: timer=80d188c0
          <idle>-0     [000] d...  1571.294784: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=1677 next_prio=120
     kworker/0:3-1677  [000] ....  1571.294793: workqueue_execute_start: work struct 80d188b0: function bcm2835_mbox_delayed_work_callback
     kworker/0:3-1677  [000] ....  1571.294795: bcm2835_mbox_delayed_work_callback <-process_one_work
     kworker/0:3-1677  [000] ....  1571.294816: <stack trace>
 => worker_thread	 
 => kthread
 => ret_from_fork
     kworker/0:3-1677  [000] d...  1571.294820: bcm2835_mbox_delayed_work_callback: IRQ17 trigger times 
     kworker/0:3-1677  [000] d...  1571.294829: bcm2835_mbox_delayed_work_callback:       1496      
	 kworker/0:3-1677  [000] d...  1571.294832: bcm2835_mbox_delayed_work_callback:          0      
	 kworker/0:3-1677  [000] d...  1571.294835: bcm2835_mbox_delayed_work_callback:          0      
	 kworker/0:3-1677  [000] d...  1571.294837: bcm2835_mbox_delayed_work_callback:          0      
	 kworker/0:3-1677  [000] ....  1571.295070: workqueue_execute_end: work struct 80d188b0