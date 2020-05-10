#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled"

echo nop > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "nop tracer enabled"

echo 1 > /sys/kernel/debug/tracing/events/sched/sched_wakeup/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
sleep 1
echo "event enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"
