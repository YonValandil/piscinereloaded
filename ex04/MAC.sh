#!/bin/sh
ifconfig -a | grep -e 'ether' | sed 's/.ether //' | sed 's/ $//'
