
"use strict";

let WaypointClear = require('./WaypointClear.js')
let FileClose = require('./FileClose.js')
let MountConfigure = require('./MountConfigure.js')
let FileWrite = require('./FileWrite.js')
let FileRename = require('./FileRename.js')
let WaypointPull = require('./WaypointPull.js')
let WaypointPush = require('./WaypointPush.js')
let FileChecksum = require('./FileChecksum.js')
let FileOpen = require('./FileOpen.js')
let FileTruncate = require('./FileTruncate.js')
let FileList = require('./FileList.js')
let CommandAck = require('./CommandAck.js')
let CommandLong = require('./CommandLong.js')
let StreamRate = require('./StreamRate.js')
let FileMakeDir = require('./FileMakeDir.js')
let SetMode = require('./SetMode.js')
let FileRemove = require('./FileRemove.js')
let MessageInterval = require('./MessageInterval.js')
let CommandHome = require('./CommandHome.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let ParamPush = require('./ParamPush.js')
let LogRequestData = require('./LogRequestData.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let ParamSet = require('./ParamSet.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let FileRead = require('./FileRead.js')
let CommandInt = require('./CommandInt.js')
let ParamGet = require('./ParamGet.js')
let ParamPull = require('./ParamPull.js')
let CommandBool = require('./CommandBool.js')
let LogRequestList = require('./LogRequestList.js')
let CommandTOL = require('./CommandTOL.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')

module.exports = {
  WaypointClear: WaypointClear,
  FileClose: FileClose,
  MountConfigure: MountConfigure,
  FileWrite: FileWrite,
  FileRename: FileRename,
  WaypointPull: WaypointPull,
  WaypointPush: WaypointPush,
  FileChecksum: FileChecksum,
  FileOpen: FileOpen,
  FileTruncate: FileTruncate,
  FileList: FileList,
  CommandAck: CommandAck,
  CommandLong: CommandLong,
  StreamRate: StreamRate,
  FileMakeDir: FileMakeDir,
  SetMode: SetMode,
  FileRemove: FileRemove,
  MessageInterval: MessageInterval,
  CommandHome: CommandHome,
  LogRequestEnd: LogRequestEnd,
  ParamPush: ParamPush,
  LogRequestData: LogRequestData,
  CommandTriggerInterval: CommandTriggerInterval,
  ParamSet: ParamSet,
  FileRemoveDir: FileRemoveDir,
  CommandTriggerControl: CommandTriggerControl,
  FileRead: FileRead,
  CommandInt: CommandInt,
  ParamGet: ParamGet,
  ParamPull: ParamPull,
  CommandBool: CommandBool,
  LogRequestList: LogRequestList,
  CommandTOL: CommandTOL,
  SetMavFrame: SetMavFrame,
  CommandVtolTransition: CommandVtolTransition,
  VehicleInfoGet: VehicleInfoGet,
  WaypointSetCurrent: WaypointSetCurrent,
};
