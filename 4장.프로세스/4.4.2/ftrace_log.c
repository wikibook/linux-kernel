# tracer: function
#
# entries-in-buffer/entries-written: 87/87   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-2181  [003] .... 11491.709994: copy_process.part.5+0x14/0x1b08 <-_do_fork+0xd8/0x438
            bash-2181  [003] .... 11491.710037: <stack trace>
 => copy_process.part.5+0x18/0x1b08
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03260
...	 
   rpi_proc_exit-30382 [003] .... 11500.715929: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
   rpi_proc_exit-30382 [003] .... 11500.715968: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ec325a8
   rpi_proc_exit-30382 [003] .... 11500.716469: sched_process_exit: comm=rpi_proc_exit pid=30382 prio=120
   rpi_proc_exit-30382 [003] d... 11500.716565: signal_generate: sig=17 errno=0 code=1 comm=bash pid=2181 grp=1 res=0
            bash-2181  [003] d... 11500.716840: signal_deliver: sig=17 errno=0 code=1 sa_handler=55a6c sa_flags=14000000
		
