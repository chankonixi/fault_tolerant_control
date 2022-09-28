function slBusOut = ControlCommand(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    currentlength = length(slBusOut.Header);
    for iter=1:currentlength
        slBusOut.Header(iter) = bus_conv_fcns.ros.msgToBus.std_msgs.Header(msgIn.Header(iter),slBusOut(1).Header(iter),varargin{:});
    end
    slBusOut.Header = bus_conv_fcns.ros.msgToBus.std_msgs.Header(msgIn.Header,slBusOut(1).Header,varargin{:});
    slBusOut.ControlMode = uint8(msgIn.ControlMode);
    slBusOut.Off = logical(msgIn.Off);
    currentlength = length(slBusOut.ExecutionTime);
    for iter=1:currentlength
        slBusOut.ExecutionTime(iter) = bus_conv_fcns.ros.msgToBus.ros.Time(msgIn.ExecutionTime(iter),slBusOut(1).ExecutionTime(iter),varargin{:});
    end
    slBusOut.ExecutionTime = bus_conv_fcns.ros.msgToBus.ros.Time(msgIn.ExecutionTime,slBusOut(1).ExecutionTime,varargin{:});
    currentlength = length(slBusOut.Orientation);
    for iter=1:currentlength
        slBusOut.Orientation(iter) = bus_conv_fcns.ros.msgToBus.geometry_msgs.Quaternion(msgIn.Orientation(iter),slBusOut(1).Orientation(iter),varargin{:});
    end
    slBusOut.Orientation = bus_conv_fcns.ros.msgToBus.geometry_msgs.Quaternion(msgIn.Orientation,slBusOut(1).Orientation,varargin{:});
    currentlength = length(slBusOut.Bodyrates);
    for iter=1:currentlength
        slBusOut.Bodyrates(iter) = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.Bodyrates(iter),slBusOut(1).Bodyrates(iter),varargin{:});
    end
    slBusOut.Bodyrates = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.Bodyrates,slBusOut(1).Bodyrates,varargin{:});
    currentlength = length(slBusOut.AngularAccelerations);
    for iter=1:currentlength
        slBusOut.AngularAccelerations(iter) = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.AngularAccelerations(iter),slBusOut(1).AngularAccelerations(iter),varargin{:});
    end
    slBusOut.AngularAccelerations = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.AngularAccelerations,slBusOut(1).AngularAccelerations,varargin{:});
    slBusOut.Thrust = double(msgIn.Thrust);
                    currentlength = length(slBusOut.MotThrottle);
                    slBusOut.MotThrottle = double(msgIn.MotThrottle(1:currentlength));
                    currentlength = length(slBusOut.RotorThrust);
                    slBusOut.RotorThrust = double(msgIn.RotorThrust(1:currentlength));
end
