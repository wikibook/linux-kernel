# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     kworker/0:0-27338 [000] d.h.  6028.897808: irq_handler_entry: irq=56 name=dwc_otg
     kworker/0:0-27338 [000] d.h.  6028.897809: dwc_otg_common_irq <-__handle_irq_event_percpu
     kworker/0:0-27338 [000] d.h.  6028.897847: <stack trace>
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => _raw_spin_unlock_irqrestore
 => _raw_spin_unlock_irqrestore
 => schedule_timeout
 => wait_for_common
 => wait_for_completion_timeout
 => usb_start_wait_urb
 => usb_control_msg
 => __usbnet_read_cmd
 => usbnet_read_cmd
 => __smsc95xx_read_reg
 => __smsc95xx_phy_wait_not_busy
 => __smsc95xx_mdio_read
 => check_carrier
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 