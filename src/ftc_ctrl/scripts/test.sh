#!/bin/bash

# rostopic pub -1 $1/start_rotors std_msgs/Empty --


# ./reference.sh 0.0 -0.0 1.0 $1

function sigmoid()
{
  local i=1
  while [ 0 -le $i ];do
    rostopic pub -1 $1/start_rotors std_msgs/Empty --
    awk -v va=$i -v vb=$1 'BEGIN{fe=1-exp(-va/1000);system("rostopic pub -1 " vb "/reference_pos geometry_msgs/Point -- 0.0 -0.0 " fe);print fe;}'
    i=$[ $i + 1 ]
    sleep 0.01
  done
}

sigmoid $1