
"use strict";

let SetMavFrame = require('./SetMavFrame.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let ParamGet = require('./ParamGet.js')
let ParamPull = require('./ParamPull.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileRename = require('./FileRename.js')
let WaypointPush = require('./WaypointPush.js')
let ParamPush = require('./ParamPush.js')
let FileRemove = require('./FileRemove.js')
let FileOpen = require('./FileOpen.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let StreamRate = require('./StreamRate.js')
let WaypointClear = require('./WaypointClear.js')
let CommandInt = require('./CommandInt.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let CommandBool = require('./CommandBool.js')
let FileClose = require('./FileClose.js')
let LogRequestList = require('./LogRequestList.js')
let CommandLong = require('./CommandLong.js')
let CommandHome = require('./CommandHome.js')
let MountConfigure = require('./MountConfigure.js')
let LogRequestData = require('./LogRequestData.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let WaypointPull = require('./WaypointPull.js')
let FileRead = require('./FileRead.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileTruncate = require('./FileTruncate.js')
let CommandAck = require('./CommandAck.js')
let FileWrite = require('./FileWrite.js')
let CommandTOL = require('./CommandTOL.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileList = require('./FileList.js')
let MessageInterval = require('./MessageInterval.js')
let ParamSet = require('./ParamSet.js')
let SetMode = require('./SetMode.js')
let FileChecksum = require('./FileChecksum.js')

module.exports = {
  SetMavFrame: SetMavFrame,
  VehicleInfoGet: VehicleInfoGet,
  ParamGet: ParamGet,
  ParamPull: ParamPull,
  LogRequestEnd: LogRequestEnd,
  FileRename: FileRename,
  WaypointPush: WaypointPush,
  ParamPush: ParamPush,
  FileRemove: FileRemove,
  FileOpen: FileOpen,
  FileRemoveDir: FileRemoveDir,
  StreamRate: StreamRate,
  WaypointClear: WaypointClear,
  CommandInt: CommandInt,
  CommandVtolTransition: CommandVtolTransition,
  CommandBool: CommandBool,
  FileClose: FileClose,
  LogRequestList: LogRequestList,
  CommandLong: CommandLong,
  CommandHome: CommandHome,
  MountConfigure: MountConfigure,
  LogRequestData: LogRequestData,
  WaypointSetCurrent: WaypointSetCurrent,
  CommandTriggerControl: CommandTriggerControl,
  WaypointPull: WaypointPull,
  FileRead: FileRead,
  FileMakeDir: FileMakeDir,
  FileTruncate: FileTruncate,
  CommandAck: CommandAck,
  FileWrite: FileWrite,
  CommandTOL: CommandTOL,
  CommandTriggerInterval: CommandTriggerInterval,
  FileList: FileList,
  MessageInterval: MessageInterval,
  ParamSet: ParamSet,
  SetMode: SetMode,
  FileChecksum: FileChecksum,
};
