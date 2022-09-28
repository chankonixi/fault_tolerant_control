
#!/bin/bash

# rostopic pub -1 $4/reference_pos geometry_msgs/Point -- $1 $2 $3
rostopic pub -r 250 $4/reference_pos geometry_msgs/Point -- $1 $2 $3

