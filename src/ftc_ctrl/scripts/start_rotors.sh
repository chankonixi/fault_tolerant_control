#!/bin/bash

rostopic pub -1 $1/start_rotors std_msgs/Empty --

function sigmoid()
{
  local i=1
  while [ 0 -le $i ];do
    awk -v va=$i -v vb=$1 'BEGIN{fe=1-exp(-va/1000);system("./reference.sh 0.0 -0.0 " fe " " vb);}'
    # awk -v va=$i -v vb=$1 'BEGIN{fe=1/(1+exp(-va));system("./reference.sh 0.0 -0.0 " fe " " vb);}'
    i=$[ $i + 1 ]
    sleep 0.0001
  done
}

sigmoid $1

#sleep 20s


