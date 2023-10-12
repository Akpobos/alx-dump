#!/bin/bash

# Check if the /proc/sys/kernel/pid_max file exists
if [ -f /proc/sys/kernel/pid_max ]; then
    pid_max_value=$(cat /proc/sys/kernel/pid_max)
    echo "Maximum PID value: $pid_max_value"
else
    echo "Error: Unable to access /proc/sys/kernel/pid_max."
    exit 1
fi