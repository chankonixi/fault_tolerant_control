function slBusOut = QuadStateEstimate(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    currentlength = length(slBusOut.Header);
    for iter=1:currentlength
        slBusOut.Header(iter) = bus_conv_fcns.ros.msgToBus.std_msgs.Header(msgIn.Header(iter),slBusOut(1).Header(iter),varargin{:});
    end
    slBusOut.Header = bus_conv_fcns.ros.msgToBus.std_msgs.Header(msgIn.Header,slBusOut(1).Header,varargin{:});
    slBusOut.EstimatorId = int8(msgIn.EstimatorId);
    currentlength = length(slBusOut.Position);
    for iter=1:currentlength
        slBusOut.Position(iter) = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.Position(iter),slBusOut(1).Position(iter),varargin{:});
    end
    slBusOut.Position = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.Position,slBusOut(1).Position,varargin{:});
    currentlength = length(slBusOut.Velocity);
    for iter=1:currentlength
        slBusOut.Velocity(iter) = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.Velocity(iter),slBusOut(1).Velocity(iter),varargin{:});
    end
    slBusOut.Velocity = bus_conv_fcns.ros.msgToBus.geometry_msgs.Vector3(msgIn.Velocity,slBusOut(1).Velocity,varargin{:});
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
end
