#!/usr/bin/env bash

# .bashrc
echo "cd $APPDIR" >> /home/$THEUSER/.bashrc
echo "source $VAGRANTFILES/environment.sh" >> /home/$THEUSER/.bashrc

apt-get update
apt-get upgrade -y
apt-get install -y htop
apt-get install -y atop
apt-get install -y git
apt-get install -y build-essential

# node.js
$VAGRANTFILES/nodejs.sh

cd $APPDIR
npm i
npm i -g gulp@next


chown -R $THEUSER $APPDIR
