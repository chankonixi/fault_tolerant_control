
"use strict";

let HilActuatorControls = require('./HilActuatorControls.js');
let ParamValue = require('./ParamValue.js');
let VehicleInfo = require('./VehicleInfo.js');
let Mavlink = require('./Mavlink.js');
let WaypointList = require('./WaypointList.js');
let HilControls = require('./HilControls.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let Altitude = require('./Altitude.js');
let ExtendedState = require('./ExtendedState.js');
let LogData = require('./LogData.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let RCOut = require('./RCOut.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let ActuatorControl = require('./ActuatorControl.js');
let Waypoint = require('./Waypoint.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let DebugValue = require('./DebugValue.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let State = require('./State.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let Trajectory = require('./Trajectory.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let GPSRTK = require('./GPSRTK.js');
let RCIn = require('./RCIn.js');
let MountControl = require('./MountControl.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let Param = require('./Param.js');
let StatusText = require('./StatusText.js');
let LogEntry = require('./LogEntry.js');
let RTKBaseline = require('./RTKBaseline.js');
let Thrust = require('./Thrust.js');
let ESCStatus = require('./ESCStatus.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let GPSINPUT = require('./GPSINPUT.js');
let BatteryStatus = require('./BatteryStatus.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let FileEntry = require('./FileEntry.js');
let ESCInfo = require('./ESCInfo.js');
let Vibration = require('./Vibration.js');
let HilSensor = require('./HilSensor.js');
let PositionTarget = require('./PositionTarget.js');
let ManualControl = require('./ManualControl.js');
let CommandCode = require('./CommandCode.js');
let VFR_HUD = require('./VFR_HUD.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let HomePosition = require('./HomePosition.js');
let WaypointReached = require('./WaypointReached.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let RotorControl = require('./RotorControl.js');
let GPSRAW = require('./GPSRAW.js');
let RTCM = require('./RTCM.js');
let HilGPS = require('./HilGPS.js');
let LandingTarget = require('./LandingTarget.js');
let Tunnel = require('./Tunnel.js');
let RadioStatus = require('./RadioStatus.js');

module.exports = {
  HilActuatorControls: HilActuatorControls,
  ParamValue: ParamValue,
  VehicleInfo: VehicleInfo,
  Mavlink: Mavlink,
  WaypointList: WaypointList,
  HilControls: HilControls,
  CameraImageCaptured: CameraImageCaptured,
  WheelOdomStamped: WheelOdomStamped,
  Altitude: Altitude,
  ExtendedState: ExtendedState,
  LogData: LogData,
  ADSBVehicle: ADSBVehicle,
  RCOut: RCOut,
  OnboardComputerStatus: OnboardComputerStatus,
  ESCTelemetry: ESCTelemetry,
  ActuatorControl: ActuatorControl,
  Waypoint: Waypoint,
  NavControllerOutput: NavControllerOutput,
  PlayTuneV2: PlayTuneV2,
  DebugValue: DebugValue,
  EstimatorStatus: EstimatorStatus,
  TimesyncStatus: TimesyncStatus,
  State: State,
  CompanionProcessStatus: CompanionProcessStatus,
  ESCTelemetryItem: ESCTelemetryItem,
  Trajectory: Trajectory,
  OpticalFlowRad: OpticalFlowRad,
  GPSRTK: GPSRTK,
  RCIn: RCIn,
  MountControl: MountControl,
  MagnetometerReporter: MagnetometerReporter,
  Param: Param,
  StatusText: StatusText,
  LogEntry: LogEntry,
  RTKBaseline: RTKBaseline,
  Thrust: Thrust,
  ESCStatus: ESCStatus,
  AttitudeTarget: AttitudeTarget,
  GPSINPUT: GPSINPUT,
  BatteryStatus: BatteryStatus,
  ESCInfoItem: ESCInfoItem,
  FileEntry: FileEntry,
  ESCInfo: ESCInfo,
  Vibration: Vibration,
  HilSensor: HilSensor,
  PositionTarget: PositionTarget,
  ManualControl: ManualControl,
  CommandCode: CommandCode,
  VFR_HUD: VFR_HUD,
  GlobalPositionTarget: GlobalPositionTarget,
  HilStateQuaternion: HilStateQuaternion,
  HomePosition: HomePosition,
  WaypointReached: WaypointReached,
  CamIMUStamp: CamIMUStamp,
  ESCStatusItem: ESCStatusItem,
  OverrideRCIn: OverrideRCIn,
  RotorControl: RotorControl,
  GPSRAW: GPSRAW,
  RTCM: RTCM,
  HilGPS: HilGPS,
  LandingTarget: LandingTarget,
  Tunnel: Tunnel,
  RadioStatus: RadioStatus,
};
