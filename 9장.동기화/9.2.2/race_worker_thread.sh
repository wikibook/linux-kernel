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

echo trace_function_dummy_call > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "set_ftrace_filter enabled"

echo 1 > /sys/kernel/debug/tracing/events/workqueue/workqueue_execute_start/enable
echo 1 > /sys/kernel/debug/tracing/events/workqueue/workqueue_execute_end/enable
sleep 1

echo 1 > /sys/kernel/debug/tracing/options/func_stack_trace
echo 1 > /sys/kernel/debug/tracing/options/sym-offset
echo "function stack trace enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"