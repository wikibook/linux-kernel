#!/bin/bash

echo > /sys/kernel/debug/tracing/set_event
sleep 1

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1

echo nop > /sys/kernel/debug/tracing/current_tracer
sleep 1 

echo 1 > /sys/kernel/debug/tracing/events/raw_syscalls/sys_enter/enable
echo 1 > /sys/kernel/debug/tracing/events/raw_syscalls/sys_exit/enable
sleep 1

echo 1 > /sys/kernel/debug/tracing/tracing_on
sleep 1
