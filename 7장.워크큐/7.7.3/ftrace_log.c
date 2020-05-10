# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |		 
          <idle>-0     [000] d.h.   181.353912: irq_handler_entry: irq=17 name=3f00b880.mailbox
          <idle>-0     [000] d.h.   181.353926: workqueue_queue_work: work struct=80d188a0 function=bcm2835_mbox_work_callback workqueue=b9c06300 req_cpu=4 cpu=0
          <idle>-0     [000] d.h.   181.353929: workqueue_activate_work: work struct 80d188a0
          <idle>-0     [001] dnh.   181.353929: sched_wakeup: comm=kworker/1:1 pid=29 prio=120 target_cpu=001
          <idle>-0     [000] d.h.   181.353931: insert_work <801341d8> <-__queue_work <80135b38>
          <idle>-0     [001] d...   181.353939: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=29 next_prio=120
     kworker/1:1-29    [001] ....   181.353969: workqueue_execute_end: work struct b7d5dd38
     kworker/1:1-29    [001] d...   181.353981: sched_switch: prev_comm=kworker/1:1 prev_pid=29 prev_prio=120 prev_state=t ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   181.353999: <stack trace>
 => bcm2835_mbox_irq <8066bb50>
 => __handle_irq_event_percpu <8017595c>
 => handle_irq_event_percpu <80175af0>
 => handle_irq_event <80175b80>
 => handle_level_irq <8017951c>
 => generic_handle_irq <80174a28>
 => bcm2836_chained_handle_irq <804c4708>
 => generic_handle_irq <80174a28>
 => __handle_domain_irq <8017507c>
 => bcm2836_arm_irqchip_handle_irq <80101520>
 => __irq_svc <807a3f7c>
 => arch_cpu_idle <801089d0>
 => arch_cpu_idle <801089d0>
 => default_idle_call <807a36c4>
 => do_idle <80161538>
 => cpu_startup_entry <80161848>
 => rest_init <8079d30c>
 => start_kernel <80b00e28>
          <idle>-0     [000] dnh.   181.354009: sched_wakeup: comm=kworker/0:2 pid=94 prio=120 target_cpu=000
          <idle>-0     [000] dnh.   181.354013: irq_handler_exit: irq=17 ret=handled
          <idle>-0     [000] d...   181.354027: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=94 next_prio=120
     kworker/0:2-94    [000] ....   181.354033: workqueue_execute_start: work struct 80d188a0: function bcm2835_mbox_work_callback
     kworker/0:2-94    [000] ....   181.354035: bcm2835_mbox_work_callback <8066bb70> <-process_one_work <80137390>
     kworker/0:2-94    [000] ....   181.354053: <stack trace>
 => kthread <8013db60>
 => ret_from_fork <801080ac>
     kworker/0:2-94    [000] ....   181.354061: bcm2835_mbox_work_callback <8066bb5c>: current process: kworker/0:2
     kworker/0:2-94    [000] ....   181.354067: bcm2835_mbox_work_callback <8066bb5c>: [+] in_interrupt:0x00000000,preempt_count = 0x00000000, stack=0xb8ff0000 
     kworker/0:2-94    [000] ....   181.354273: workqueue_execute_end: work struct 80d188a0
