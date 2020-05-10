# tracer: function
#
# entries-in-buffer/entries-written: 18506/18506   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
   vfs_file_proc-2102  [001] ....  3993.231746: sys_enter: NR 5 (76fe7ed8, 80000, 3, 76ffac90, 76fe7ed8, 7edfa524)
   vfs_file_proc-2102  [001] ....  3993.231764: ext4_file_open+0x14/0x1dc <-do_dentry_open+0x240/0x3c4
   vfs_file_proc-2102  [001] ....  3993.231798: <stack trace>
 => ext4_file_open+0x18/0x1dc
 => do_dentry_open+0x240/0x3c4
 => vfs_open+0x3c/0x40
 => path_openat+0x3a8/0x1000
 => do_filp_open+0x84/0xf0
 => do_sys_open+0x144/0x1f4
 => sys_open+0x28/0x2c
 => __sys_trace_return+0x0/0x10
 => 0x7edfa434
   vfs_file_proc-2102  [001] ....  3993.231809: sys_exit: NR 5 = 3
...   
   vfs_file_proc-2102  [001] ....  3993.231946: sys_enter: NR 3 (3, 7edfa080, 200, 0, 76ff7000, 0)
   vfs_file_proc-2102  [001] ....  3993.231952: ext4_file_read_iter+0x10/0x54 <-__vfs_read+0x108/0x168
   vfs_file_proc-2102  [001] ....  3993.231969: <stack trace>
 => ext4_file_read_iter+0x14/0x54
 => __vfs_read+0x108/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => __sys_trace_return+0x0/0x10
 => 0x7edf9fdc
   vfs_file_proc-2102  [001] ....  3993.231977: sys_exit: NR 3 = 512
...	  
   vfs_file_proc-2102  [001] ....  3993.234630: sys_enter: NR 4 (3, 7edfa4a8, 10, 7edfa4a8, 1077c, 0)
   vfs_file_proc-2102  [001] ....  3993.234636: ext4_file_write_iter+0x14/0x4c0 <-__vfs_write+0x10c/0x170
   vfs_file_proc-2102  [001] ....  3993.234654: <stack trace>
 => ext4_file_write_iter+0x18/0x4c0
 => __vfs_write+0x10c/0x170
 => vfs_write+0xb4/0x1c0
 => ksys_write+0x5c/0xbc
 => sys_write+0x18/0x1c
 => __sys_trace_return+0x0/0x10
 => 0x7edfa4a4
   vfs_file_proc-2102  [001] ....  3993.234796: sys_exit: NR 4 = 16
...   
   vfs_file_proc-2102  [001] ....  3993.234803: sys_enter: NR 19 (3, 0, 0, 7edfa4a8, 1077c, 0)
   vfs_file_proc-2102  [001] ....  3993.234807: ext4_llseek+0x14/0x15c <-ksys_lseek+0xa8/0xd8
   vfs_file_proc-2102  [001] ....  3993.234821: <stack trace>
 => ext4_llseek+0x18/0x15c
 => ksys_lseek+0xa8/0xd8
 => sys_lseek+0x18/0x1c
 => __sys_trace_return+0x0/0x10
 => 0x7edfa4a4
   vfs_file_proc-2102  [001] ....  3993.234825: sys_exit: NR 19 = 0
...	
   vfs_file_proc-2102  [001] ....  3993.235673: sys_enter: NR 4 (3, 7edfa4a8, 10, 7edfa4a8, 1077c, 0)
   vfs_file_proc-2102  [001] ....  3993.235677: ext4_file_write_iter+0x14/0x4c0 <-__vfs_write+0x10c/0x170
   vfs_file_proc-2102  [001] ....  3993.235702: <stack trace>
 => ext4_file_write_iter+0x18/0x4c0
 => __vfs_write+0x10c/0x170
 => vfs_write+0xb4/0x1c0
 => ksys_write+0x5c/0xbc
 => sys_write+0x18/0x1c
 => __sys_trace_return+0x0/0x10
 => 0x7edfa4a4
   vfs_file_proc-2102  [001] ....  3993.235757: sys_exit: NR 4 = 16
...
   vfs_file_proc-2102  [001] ....  3993.235767: sys_enter: NR 118 (3, 7edfa4a8, 10, 7edfa4a8, 1077c, 0)
   vfs_file_proc-2102  [001] ....  3993.235770: ext4_sync_file+0x14/0x464 <-vfs_fsync_range+0x4c/0x8c
   vfs_file_proc-2102  [001] ....  3993.235796: <stack trace>
 => ext4_sync_file+0x18/0x464
 => vfs_fsync_range+0x4c/0x8c
 => do_fsync+0x4c/0x74
 => sys_fsync+0x1c/0x20
 => __sys_trace_return+0x0/0x10
 => 0x7edfa4a4
...
   vfs_file_proc-2102  [001] ....  3993.247132: sys_exit: NR 118 = 0
...
   vfs_file_proc-2102  [001] ....  3993.247156: sys_enter: NR 6 (3, 7edfa4a8, 10, 0, 1077c, 0)
   vfs_file_proc-2102  [001] ....  3993.247162: __close_fd+0x10/0xa0 <-sys_close+0x30/0x58
   vfs_file_proc-2102  [001] ....  3993.247197: <stack trace>
 => __close_fd+0x14/0xa0
 => sys_close+0x30/0x58
 => __sys_trace_return+0x0/0x10
 => 0x7edfa4a4
   vfs_file_proc-2102  [001] ....  3993.247203: sys_exit: NR 6 = 0