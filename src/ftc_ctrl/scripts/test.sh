#!/bin/bash

rostopic pub -1 $1/start_rotors std_msgs/Empty --
# awk -v va=10 'BEGIN{fe=1-exp(-va/1000);system("rostopic pub -r 250 hummingbird/reference_pos geometry_msgs/Point -- 0.0 -0.0 " fe);print fe;}'

# ./reference.sh 0.0 -0.0 1.0 $1

function sigmoid()
{
  local i=1
  while [ 0 -le $i ];do
    # rostopic pub -1 $1/start_rotors std_msgs/Empty --
    awk -v va=$i 'BEGIN{fe=1-exp(-va/1000);system("rostopic pub -r 250 hummingbird/reference_pos geometry_msgs/Point -- 0.0 -0.0 " fe);print fe;}'
    # awk -v va=10 'BEGIN{fe=1-exp(-va/1000);print fe;}'
    i=$[ $i + 1 ]
    sleep 0.004
  done
}

sigmoid