#!/bin/bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root"
  exit
fi
    rm -rf ~/.cli-clock.py
    rm -rf /usr/local/bin/cli-clock
    echo "Removed ~/.cli-clock.py"
    echo "/usr/local/bin/cli-clock"
    exit