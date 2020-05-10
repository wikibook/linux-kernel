#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo function > /sys/kernel/debug/tracing/current_tracer
echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled"

echo do_timer > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "set_ftrace_filter enabled"

echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
sleep 1
echo "event enabled"

echo 1 > /sys/kernel/debug/tracing/options/func_stack_trace
echo "function stack trace enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"