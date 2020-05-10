# tracer: function
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 kworker/u16:19-23715  [003] ...1  21857.480423: schedule+0x10/0x9c <-schedule_preempt_disabled+0x18/0x2c
 kworker/u16:19-23715  [003] ...1  21857.480427: <stack trace>
 =>  __mutex_lock_slowpath+0x15c/0x39c
 => mutex_lock+0x34/0x48
 => clk_prepare_lock+0x48/0xd4
 => clk_get_rate+0x24/0x90
 => dev_get_cur_freq+0x28/0x70
 => update_devfreq+0xa0/0x1d4
 => devfreq_monitor+0x34/0x94 
 => process_one_work+0x184/0x480
 => worker_thread+0x140/0x4b4
 => kthread+0xf4/0x108
 => ret_from_fork+0x10/0x50  
 kworker/u16:19-23715  [003] d..2  21857.480468: sched_switch: prev_comm=kworker/u16:19 prev_pid=23715
prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120