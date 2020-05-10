# tracer: function
#
# entries-in-buffer/entries-written: 42/42   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-2181  [001] ....  9537.645900: copy_process.part.5+0x14/0x1b08 <-_do_fork+0xd8/0x438
            bash-2181  [001] ....  9537.645914: <stack trace>
 => copy_process.part.5+0x18/0x1b08
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03260
            bash-2181  [001] ....  9537.646406: sched_process_fork: comm=bash pid=2181 child_comm=bash child_pid=30082
          whoami-30082 [001] ....  9537.648249: search_binary_handler+0x10/0x24c <-__do_execve_file+0x530/0x7d4
          whoami-30082 [001] ....  9537.648288: <stack trace>
 => search_binary_handler+0x14/0x24c
 => __do_execve_file+0x530/0x7d4
 => do_execve+0x3c/0x44
 => sys_execve+0x2c/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03304
          whoami-30082 [001] ....  9537.649127: sched_process_exec: filename=/usr/bin/whoami pid=30082 old_pid=30082
          whoami-30082 [001] ....  9537.653404: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
          whoami-30082 [001] ....  9537.653452: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ec605c8
          whoami-30082 [001] ....  9537.653983: sched_process_exit: comm=whoami pid=30082 prio=120
...
            bash-2181  [001] ....  9541.693910: copy_process.part.5+0x14/0x1b08 <-_do_fork+0xd8/0x438
            bash-2181  [001] ....  9541.693925: <stack trace>
 => copy_process.part.5+0x18/0x1b08
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03260
            bash-2181  [001] ....  9541.694405: sched_process_fork: comm=bash pid=2181 child_comm=bash child_pid=30083
             cat-30083 [000] ....  9541.696001: search_binary_handler+0x10/0x24c <-__do_execve_file+0x530/0x7d4
             cat-30083 [000] ....  9541.696041: <stack trace>
 => search_binary_handler+0x14/0x24c
 => __do_execve_file+0x530/0x7d4
 => do_execve+0x3c/0x44
 => sys_execve+0x2c/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03304
             cat-30083 [000] ....  9541.697012: sched_process_exec: filename=/bin/cat pid=30083 old_pid=30083
             cat-30083 [000] ....  9541.700627: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
             cat-30083 [000] ....  9541.700661: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ebba5c8
             cat-30083 [000] ....  9541.701065: sched_process_exit: comm=cat pid=30083 prio=120
          <idle>-0     [001] ..s.  9541.760478: sched_process_free: comm=cat pid=30083 prio=120
            bash-2181  [001] ....  9546.477779: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-2181  [001] ....  9546.477818: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03260
            bash-2181  [001] ....  9546.477823: copy_process.part.5+0x14/0x1b08 <-_do_fork+0xd8/0x438
            bash-2181  [001] ....  9546.477837: <stack trace>
 => copy_process.part.5+0x18/0x1b08
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03260
            bash-2181  [001] ....  9546.478346: sched_process_fork: comm=bash pid=2181 child_comm=bash child_pid=30084
           <...>-30084 [000] ....  9546.479989: search_binary_handler+0x10/0x24c <-__do_execve_file+0x530/0x7d4
           <...>-30084 [000] ....  9546.480041: <stack trace>
 => search_binary_handler+0x14/0x24c
 => __do_execve_file+0x530/0x7d4
 => do_execve+0x3c/0x44
 => sys_execve+0x2c/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03304
           <...>-30084 [000] ....  9546.480096: search_binary_handler+0x10/0x24c <-load_script+0x268/0x280
           <...>-30084 [000] ....  9546.480116: <stack trace>
 => search_binary_handler+0x14/0x24c
 => load_script+0x268/0x280
 => search_binary_handler+0xb0/0x24c
 => __do_execve_file+0x530/0x7d4
 => do_execve+0x3c/0x44
 => sys_execve+0x2c/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed03304
           <...>-30084 [000] ....  9546.481361: sched_process_exec: filename=./get_ftrace.sh pid=30084 old_pid=30084
