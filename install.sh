#!/bin/bash
if [ "$EUID" -ne 0 ]
  then echo "Please run as root"
  exit
fi
    g++ -o cli-clock cli-clock.cpp
    mv cli-clock /usr/local/bin/