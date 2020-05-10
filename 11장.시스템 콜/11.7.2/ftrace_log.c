# tracer: function
#
# entries-in-buffer/entries-written: 180047/206790   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-863   [001] ....  1002.070321: sys_enter: NR 4 (2, 127b008, 3a, 0, 3a, 127b008)
            bash-863   [001] ....  1002.070324: __vfs_write+0x14/0x170 <-vfs_write+0xb4/0x1c0
            bash-863   [001] ....  1002.070343: <stack trace>
 => __vfs_write+0x18/0x170
 => vfs_write+0xb4/0x1c0
 => ksys_write+0x5c/0xbc
 => sys_write+0x18/0x1c
 => __sys_trace_return+0x0/0x10
 => 0x7ed5fb04
            bash-863   [001] ....  1002.070370: sys_exit: NR 4 = 58
...
      lxterminal-844   [003] ....  1002.070447: sys_enter: NR 3 (6, 119b014, 1fec, 1000, 119b000, 76f885bc)
      lxterminal-844   [003] ....  1002.070450: __vfs_read+0x14/0x168 <-vfs_read+0x9c/0x164
      lxterminal-844   [003] ....  1002.070466: <stack trace>
 => __vfs_read+0x18/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => __sys_trace_return+0x0/0x10
 => 0x7ebb9350
      lxterminal-844   [003] ....  1002.070479: sys_exit: NR 3 = 58
 
