
"use strict";

let Mavlink = require('./Mavlink.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let Trajectory = require('./Trajectory.js');
let RCOut = require('./RCOut.js');
let CommandCode = require('./CommandCode.js');
let ESCInfo = require('./ESCInfo.js');
let Thrust = require('./Thrust.js');
let HilGPS = require('./HilGPS.js');
let MountControl = require('./MountControl.js');
let ActuatorControl = require('./ActuatorControl.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let Altitude = require('./Altitude.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let HomePosition = require('./HomePosition.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let GPSRAW = require('./GPSRAW.js');
let GPSRTK = require('./GPSRTK.js');
let RotorControl = require('./RotorControl.js');
let Tunnel = require('./Tunnel.js');
let RTCM = require('./RTCM.js');
let RadioStatus = require('./RadioStatus.js');
let VehicleInfo = require('./VehicleInfo.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let DebugValue = require('./DebugValue.js');
let WaypointReached = require('./WaypointReached.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let GPSINPUT = require('./GPSINPUT.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let Waypoint = require('./Waypoint.js');
let State = require('./State.js');
let ManualControl = require('./ManualControl.js');
let Vibration = require('./Vibration.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let StatusText = require('./StatusText.js');
let ExtendedState = require('./ExtendedState.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let HilControls = require('./HilControls.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let RCIn = require('./RCIn.js');
let HilSensor = require('./HilSensor.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let RTKBaseline = require('./RTKBaseline.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let LogData = require('./LogData.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let PositionTarget = require('./PositionTarget.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let ParamValue = require('./ParamValue.js');
let FileEntry = require('./FileEntry.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let VFR_HUD = require('./VFR_HUD.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let Param = require('./Param.js');
let LandingTarget = require('./LandingTarget.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ESCStatus = require('./ESCStatus.js');
let LogEntry = require('./LogEntry.js');
let WaypointList = require('./WaypointList.js');
let BatteryStatus = require('./BatteryStatus.js');

module.exports = {
  Mavlink: Mavlink,
  EstimatorStatus: EstimatorStatus,
  Trajectory: Trajectory,
  RCOut: RCOut,
  CommandCode: CommandCode,
  ESCInfo: ESCInfo,
  Thrust: Thrust,
  HilGPS: HilGPS,
  MountControl: MountControl,
  ActuatorControl: ActuatorControl,
  ESCInfoItem: ESCInfoItem,
  PlayTuneV2: PlayTuneV2,
  Altitude: Altitude,
  ESCTelemetryItem: ESCTelemetryItem,
  CameraImageCaptured: CameraImageCaptured,
  HomePosition: HomePosition,
  CamIMUStamp: CamIMUStamp,
  GPSRAW: GPSRAW,
  GPSRTK: GPSRTK,
  RotorControl: RotorControl,
  Tunnel: Tunnel,
  RTCM: RTCM,
  RadioStatus: RadioStatus,
  VehicleInfo: VehicleInfo,
  HilStateQuaternion: HilStateQuaternion,
  DebugValue: DebugValue,
  WaypointReached: WaypointReached,
  CompanionProcessStatus: CompanionProcessStatus,
  GPSINPUT: GPSINPUT,
  OpticalFlowRad: OpticalFlowRad,
  Waypoint: Waypoint,
  State: State,
  ManualControl: ManualControl,
  Vibration: Vibration,
  OnboardComputerStatus: OnboardComputerStatus,
  StatusText: StatusText,
  ExtendedState: ExtendedState,
  HilActuatorControls: HilActuatorControls,
  HilControls: HilControls,
  NavControllerOutput: NavControllerOutput,
  RCIn: RCIn,
  HilSensor: HilSensor,
  MagnetometerReporter: MagnetometerReporter,
  RTKBaseline: RTKBaseline,
  ADSBVehicle: ADSBVehicle,
  AttitudeTarget: AttitudeTarget,
  LogData: LogData,
  OverrideRCIn: OverrideRCIn,
  PositionTarget: PositionTarget,
  ESCTelemetry: ESCTelemetry,
  GlobalPositionTarget: GlobalPositionTarget,
  ParamValue: ParamValue,
  FileEntry: FileEntry,
  TimesyncStatus: TimesyncStatus,
  VFR_HUD: VFR_HUD,
  ESCStatusItem: ESCStatusItem,
  Param: Param,
  LandingTarget: LandingTarget,
  WheelOdomStamped: WheelOdomStamped,
  ESCStatus: ESCStatus,
  LogEntry: LogEntry,
  WaypointList: WaypointList,
  BatteryStatus: BatteryStatus,
};
