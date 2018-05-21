#!/usr/bin/env bash

apt-get autoremove -y node
curl -sL https://deb.nodesource.com/setup_8.x | bash -
apt-get install -y nodejs
