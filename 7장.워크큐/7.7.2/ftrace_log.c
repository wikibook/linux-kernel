# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     irq/86-mmc1-65    [002] d...   335.716213: workqueue_queue_work: work struct=b972ca68 function=brcmf_sdio_dataworker [brcmfmac] workqueue=b7afd200 req_cpu=4 cpu=4294967295
     irq/86-mmc1-65    [002] d...   335.716214: workqueue_activate_work: work struct b972ca68
     irq/86-mmc1-65    [002] d...   335.716215: insert_work <-__queue_work
     irq/86-mmc1-65    [002] d...   335.716236: <stack trace>
 => brcmf_sdio_isr
 => brcmf_sdiod_ib_irqhandler
 => process_sdio_pending_irqs
 => sdio_run_irqs
 => bcm2835_mmc_thread_irq
 => irq_thread_fn
 => irq_thread
 => kthread
 => ret_from_fork
          <idle>-0     [001] dnh.   335.716247: sched_wakeup: comm=kworker/u8:1 pid=1353 prio=120 target_cpu=001
     irq/86-mmc1-65    [002] d...   335.716249: sched_switch: prev_comm=irq/86-mmc1 prev_pid=65 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.716251: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=1353 next_prio=120
    kworker/u8:1-1353  [001] ....   335.716257: workqueue_execute_start: work struct b972ca68: function brcmf_sdio_dataworker [brcmfmac]
    kworker/u8:1-1353  [001] ....   335.716258: brcmf_sdio_dataworker <-process_one_work
    kworker/u8:1-1353  [001] ....   335.716267: <stack trace>
 => kthread
 => ret_from_fork