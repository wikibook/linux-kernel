#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo nop > /sys/kernel/debug/tracing/current_tracer
echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled"

echo 1 > /sys/kernel/debug/tracing/events/timer/timer_init/enable
echo 1 > /sys/kernel/debug/tracing/events/timer/timer_start/enable
echo 1 > /sys/kernel/debug/tracing/events/timer/timer_expire_entry/enable
echo 1 > /sys/kernel/debug/tracing/events/timer/timer_expire_exit/enable
echo 1 > /sys/kernel/debug/tracing/events/timer/timer_cancel/enable

echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
sleep 1
echo "event enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"