# tracer: function_graph
#
# CPU  DURATION                  FUNCTION CALLS
# |     |   |                     |   |   |   |
 0)               |  /* irq_handler_entry: irq=17 name=3f00b880.mailbox */
 0)   7.084 us    |  bcm2835_mbox_irq();
 0)               |  /* irq_handler_exit: irq=17 ret=handled */
 ------------------------------------------
 3)   kworker-32   =>  chromiu-919  
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=kworker/3:1 pid=32 prio=120 target_cpu=003 */
 3)               |  /* sched_switch: prev_comm=chromium-browse prev_pid=919 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=32 next_prio=120 */
 ------------------------------------------
 3)  chromiu-919   =>   kworker-32  
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=irq/17-3f00b880 pid=33 prio=49 target_cpu=003 */
 3)               |  /* sched_switch: prev_comm=kworker/3:1 prev_pid=32 prev_prio=120 prev_state=R ==> next_comm=irq/17-3f00b880 next_pid=33 next_prio=49 */
 ------------------------------------------
 3)   kworker-32   =>   irq/17--33  
 ------------------------------------------

 3)               |  bcm2835_mbox_threaded_irq() {
 3)               |  /* irq=17, process: irq/17-3f00b880  */
 3)               |  /* [+] in_interrupt: 0x00000000,preempt_count = 0x00000000, stack=0xb9714000  */
 3) ! 153.437 us  |  }