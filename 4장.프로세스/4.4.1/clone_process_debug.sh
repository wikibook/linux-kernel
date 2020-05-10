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

echo function > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "function tracer enabled"

echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_wakeup/enable

echo 1 > /sys/kernel/debug/tracing/events/sched/sched_process_fork/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_process_exit/enable

echo 1 > /sys/kernel/debug/tracing/events/signal/enable

echo sys_clone do_exit > /sys/kernel/debug/tracing/set_ftrace_filter
echo _do_fork copy_process* >> /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "event enabled"

sleep 1
echo "set_ftrace_filter enabled"

echo 1 > /sys/kernel/debug/tracing/options/func_stack_trace
echo 1 > /sys/kernel/debug/tracing/options/sym-offset
echo "function stack trace enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"
