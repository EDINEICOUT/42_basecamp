#!/bin/sh

ifconfig | sed -n '/ether/p' | sed -r 's/^.{14}//g'
