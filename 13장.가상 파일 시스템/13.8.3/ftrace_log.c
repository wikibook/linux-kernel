# tracer: function
#
# entries-in-buffer/entries-written: 6376/6376   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
  stat_file_proc-2848  [002] ....  9731.927338: sys_enter: NR 197 (3, 7ed91450, 7ed91450, 76f19c90, 3, 7ed91534)
  stat_file_proc-2848  [002] ....  9731.927346: ext4_file_getattr+0x10/0xbc <-vfs_getattr_nosec+0x68/0x7c
  stat_file_proc-2848  [002] ....  9731.927382: <stack trace>
 => ext4_file_getattr+0x14/0xbc
 => vfs_getattr_nosec+0x68/0x7c
 => vfs_statx_fd+0x4c/0x78
 => sys_fstat64+0x3c/0x6c
 => __sys_trace_return+0x0/0x10
 => 0x7ed91444
  stat_file_proc-2848  [002] ....  9731.927385: generic_fillattr+0x10/0x108 <-ext4_getattr+0xc8/0xd0
  stat_file_proc-2848  [002] ....  9731.927402: <stack trace>
 => generic_fillattr+0x14/0x108
 => ext4_getattr+0xc8/0xd0
 => ext4_file_getattr+0x24/0xbc
 => vfs_getattr_nosec+0x68/0x7c
 => vfs_statx_fd+0x4c/0x78
 => sys_fstat64+0x3c/0x6c
 => __sys_trace_return+0x0/0x10
 => 0x7ed91444
  stat_file_proc-2848  [002] ....  9731.927409: sys_exit: NR 197 = 0
...  
  stat_file_proc-2848  [002] ....  9731.929170: sys_enter: NR 197 (1, 7ed90f18, 7ed90f18, 76de5f18, 76eb9d50, 76eb7bec)
  stat_file_proc-2848  [002] ....  9731.929174: generic_fillattr+0x10/0x108 <-vfs_getattr_nosec+0x74/0x7c
  stat_file_proc-2848  [002] ....  9731.929190: <stack trace>
 => generic_fillattr+0x14/0x108
 => vfs_getattr_nosec+0x74/0x7c
 => vfs_statx_fd+0x4c/0x78
 => sys_fstat64+0x3c/0x6c
 => __sys_trace_return+0x0/0x10
 => 0x7ed90f10
  stat_file_proc-2848  [002] ....  9731.929195: sys_exit: NR 197 = 0