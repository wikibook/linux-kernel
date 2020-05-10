# tracer: function
#
# entries-in-buffer/entries-written: 17474/17474   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
     statfs_proc-2571  [002] ....  8294.737296: sys_enter: NR 99 (7e8ac508, 7e8ac588, 7e8ac588, 7e8ac508, 105c8, 0)
     statfs_proc-2571  [002] ....  8294.737310: ext4_statfs+0x14/0x398 <-statfs_by_dentry+0x58/0x7c
     statfs_proc-2571  [002] ....  8294.737345: <stack trace>
 => ext4_statfs+0x18/0x398
 => statfs_by_dentry+0x58/0x7c
 => vfs_statfs+0x24/0x94
 => user_statfs+0x64/0xac
 => sys_statfs+0x34/0x64
 => __sys_trace_return+0x0/0x10
 => 0x7e8ac504
     statfs_proc-2571  [002] ....  8294.737358: sys_exit: NR 99 = 0
...	 
     statfs_proc-2571  [002] ....  8294.737395: simple_statfs+0x10/0x38 <-statfs_by_dentry+0x58/0x7c
     statfs_proc-2571  [002] ....  8294.737412: <stack trace>
 => simple_statfs+0x14/0x38
 => statfs_by_dentry+0x58/0x7c
 => vfs_statfs+0x24/0x94
 => user_statfs+0x64/0xac
 => sys_statfs+0x34/0x64
 => __sys_trace_return+0x0/0x10
 => 0x7e8ac504
     statfs_proc-2571  [002] ....  8294.737417: sys_exit: NR 99 = 0