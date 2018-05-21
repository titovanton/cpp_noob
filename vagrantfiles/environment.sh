#!/usr/bin/env bash

# provision
export APPDIR=/app
export VAGRANTFILES=$APPDIR/vagrantfiles
export THEUSER=vagrant
export IP=$(ifconfig enp0s3 | grep "inet addr" | cut -d ':' -f 2 | cut -d ' ' -f 1)

# Node
export NODE_ENV=dev

# gulp
export INPUT=$APPDIR/tasks
export OUTPUT=$APPDIR/tasks
