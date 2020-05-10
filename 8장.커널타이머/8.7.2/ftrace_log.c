# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] ..s.   105.040232: mod_timer <-usb_hcd_poll_rh_status
          <idle>-0     [000] ..s.   105.040261: <stack trace>
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
          <idle>-0     [000] d.s.   105.040265: timer_start: timer=b9029684 function=rh_timer_func expires=4294947825 [timeout=24] cpu=0 idx=25 flags=
          <idle>-0     [000] d.s.   105.040268: mod_timer: [-][swapper/0]jiffies_64: 4294947801, timer->expires: 4294947825  caller:usb_hcd_poll_rh_status+0x10c/0x138 
          <idle>-0     [000] d.s.   105.040271: mod_timer: [-] in_softirq(): 0x00000100,preempt_count = 0x00000100 
...		  
          <idle>-0     [000] d.h.   105.290127: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   105.290131: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   105.290132: raspbian_trace_debug_info <-__raise_softirq_irqoff
          <idle>-0     [000] d.h.   105.290168: <stack trace>
 => run_local_timers
 => update_process_times
 => tick_sched_handle
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
          <idle>-0     [000] d.h.   105.290172: raspbian_trace_debug_info: [+][swapper/0] jiffies_64: 4294947826, caller:__raise_softirq_irqoff+0x64/0xe8 
          <idle>-0     [000] d.h.   105.290175: raspbian_trace_debug_info: [+] in_softirq(): 0x00000000,preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   105.290181: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   105.290185: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   105.290187: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.s.   105.290189: timer_cancel: timer=b9029684
          <idle>-0     [000] ..s.   105.290191: timer_expire_entry: timer=b9029684 function=rh_timer_func now=4294947826
          <idle>-0     [000] ..s.   105.290192: raspbian_trace_debug_info <-rh_timer_func
          <idle>-0     [000] ..s.   105.290219: <stack trace>
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
          <idle>-0     [000] ..s.   105.290223: raspbian_trace_debug_info: [-][swapper/0]jiffies_64: 4294947826, caller:rh_timer_func+0x44/0x54 
          <idle>-0     [000] ..s.   105.290226: raspbian_trace_debug_info: [-] in_softirq(): 0x00000100,preempt_count = 0x00000100 
          <idle>-0     [000] ..s.   105.290289: timer_expire_exit: timer=b9029684 