#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled"

echo  secondary_start_kernel  > /sys/kernel/debug/tracing/set_ftrace_filter	
sleep 1
echo "set_ftrace_filter init"

echo nop > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "nop tracer enabled"

echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_wakeup/enable

echo 1 > /sys/kernel/debug/tracing/events/workqueue/workqueue_activate_work/enable 
echo 1 > /sys/kernel/debug/tracing/events/workqueue/workqueue_queue_work/enable 
echo 1 > /sys/kernel/debug/tracing/events/workqueue/workqueue_execute_start/enable 
echo 1 > /sys/kernel/debug/tracing/events/workqueue/workqueue_execute_end/enable 
sleep 1
echo "event enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"