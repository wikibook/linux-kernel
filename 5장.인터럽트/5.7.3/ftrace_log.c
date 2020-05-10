# tracer: nop
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     kworker/0:1-29    [000] d.h.    89.431692: irq_handler_entry: irq=162 name=arch_timer
     kworker/0:1-29    [000] d.h.    89.431701: irq_handler_exit: irq=162 ret=handled
     kworker/0:1-29    [000] d.h.    89.431707: irq_handler_entry: irq=17 name=3f00b880.mailbox
     kworker/0:1-29    [000] d.h.    89.431712: __handle_irq_event_percpu: [+] irq:[17] irq_handler: bcm2835_mbox_irq+0x0/0x60 caller:(handle_irq_event_percpu+0x2c/0x68) 
     kworker/0:1-29    [000] d.h.    89.431719: irq_handler_exit: irq=17 ret=handled
          <idle>-0     [000] d.h.    89.432021: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.    89.432025: __handle_irq_event_percpu: [+] irq:[56] irq_handler: dwc_otg_common_irq+0x0/0x28 caller:(handle_irq_event_percpu+0x2c/0x68) 
          <idle>-0     [000] d.h.    89.432028: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.    89.432029: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.    89.432032: __handle_irq_event_percpu: [+] irq:[56] irq_handler: dwc_otg_pcd_irq+0x0/0x28 caller:(handle_irq_event_percpu+0x2c/0x68) 
          <idle>-0     [000] d.h.    89.432034: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.    89.432036: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.    89.432039: __handle_irq_event_percpu: [+] irq:[56] irq_handler: usb_hcd_irq+0x0/0x48 caller:(handle_irq_event_percpu+0x2c/0x68) 
          <idle>-0     [000] d.h.    89.432046: irq_handler_exit: irq=56 ret=handled
 