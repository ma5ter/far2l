#pragma once

enum LanguageID
{
  MTitle,
  MDescription,
  MOK,
  MCancel,
  MRetry,
  MSkip,
  MError,

  MPluginOptionsTitle,
  MEnableDesktopNotifications,
  MEnterExecRemotely,
  MUMaskOverride,
  MConnectUsingProxy,
  MEditTSocksConfig,

  MRememberChoice,
  MOperationFailed,
  MCouldNotConnect,
  MWrongPath,

  MLoginAuthTitle,
  MLoginAuthRetryTitle,
  MLoginAuthTo,
  MLoginAuthRetryTo,

  MProtocol,
  MHost,
  MPort,
  MLoginMode,
  MPasswordModeNoPassword,
  MPasswordModeAskPassword,
  MPasswordModeSavedPassword,
  MUserName,
  MPassword,
  MDirectory,
  MDisplayName,
  MProtocolOptions,
  MSave,
  MConnect,
  MSaveConnect,

  MCreateSiteConnection,
  MEditHost,

  MXferCopyDownloadTitle,
  MXferCopyUploadTitle,
  MXferCopyCrossloadTitle,
  MXferMoveDownloadTitle,
  MXferMoveUploadTitle,
  MXferMoveCrossloadTitle,
  MXferRenameTitle,

  MXferCopyDownloadText,
  MXferCopyUploadText,
  MXferCopyCrossloadText,
  MXferMoveDownloadText,
  MXferMoveUploadText,
  MXferMoveCrossloadText,
  MXferRenameText,

  MXferDOAText,

  MXferDOAAsk,
  MXferDOAOverwrite,

  MXferDOASkip,
  MXferDOAOverwriteIfNewer,

  MXferDOAResume,
  MXferDOACreateDifferentName,

  MXferConfirmOverwriteNotify,

  MXferCurrentFile,
  MXferFileSize,
  MXferAllSize,
  MXferCount,
  MXferOf,

  MXferFileTimeSpent,
  MXferRemain,
  MXferAllTimeSpent,
  MXferSpeedCurrent,
  MXferAverage, 

  MBackground,
  MPause,
  MResume,
  MErrorActionReset,

  MProceedCopyDownload,
  MProceedCopyUpload,
  MProceedCopyCrossload,
  MProceedMoveDownload,
  MProceedMoveUpload,
  MProceedMoveCrossload,
  MProceedRename,
  MProceedChangeMode,

  MDestinationExists,
  MSourceInfo,
  MDestinationInfo,
  MOverwriteOptions,

  MRemoveTitle,
  MRemoveText,
  MProceedRemoval,

  MRemoveSitesTitle,
  MRemoveSitesText,

  MMakeDirTitle,
  MMakeDirText,
  MProceedMakeDir,

  MConnectProgressTitle,
  MGetModeProgressTitle,
  MChangeModeProgressTitle,
  MEnumDirProgressTitle,
  MCreateDirProgressTitle,

  MAbortTitle,
  MAbortText,
  MAbortConfirm,
  MAbortNotConfirm,

  MAbortingOperationTitle,
  MBreakConnection,

  MNotificationSuccess,
  MNotificationFailed,
  MNotificationUpload,
  MNotificationDownload,
  MNotificationCrossload,
  MNotificationRename,

  MErrorDownloadTitle,
  MErrorUploadTitle,
  MErrorCrossloadTitle,
  MErrorQueryInfoTitle,
  MErrorEnumDirTitle,
  MErrorMakeDirTitle,
  MErrorRenameTitle,
  MErrorRmDirTitle,
  MErrorRemoveTitle,
  MErrorSetTimes,
  MErrorChangeMode,
  MErrorSymlinkQuery,
  MErrorSymlinkCreate,

  MErrorError,
  MErrorObject,
  MErrorSite,

  MHostLocalName,
  MErrorsStatus,

  MCommandsNotSupportedTitle,
  MCommandsNotSupportedText,
  MCommandNotificationTitle,

  MNewServerIdentityTitle,
  MNewServerIdentitySite,
  MNewServerIdentityText,

  MNewServerIdentityAllowOnce,
  MNewServerIdentityAllowAlways,

  MBackgroundTasksTitle,
  MBackgroundTasksMenuActive,
  MBackgroundTasksMenuPaused,
  MBackgroundTasksMenuComplete,
  MBackgroundTasksMenuAborted,
  MNoBackgrundTasks,

  MConfirmExitFARTitle,
  MConfirmExitFARText,
  MConfirmExitFARQuestion,
  MConfirmExitFARBackgroundTasks,

  MSFTPOptionsTitle,
  MSCPOptionsTitle,
  MSFTPPrivateKeyPath,
  MSFTPCustomSubsystem,
  MSFTPMaxReadBlockSize,
  MSFTPMaxWriteBlockSize,
  MSFTPTCPNodelay,
  MSFTPTCPQuickAck,
  MSFTPEnableSandbox,

  MSFileOptionsTitle,
  MSFileCommand,
  MSFileExtra,
  MSFileCommandTimeLimit,
  MSFileCommandVarsHint,

  MSMBOptionsTitle,
  MSMBWorkgroup,
  MSMBEnumBySMB,
  MSMBEnumByNMB,

  MNFSOptionsTitle,
  MNFSOverride,
  MNFSHost,
  MNFSUID,
  MNFSGID,
  MNFSGroups,

  MWebDAVOptionsTitle,
  MWebDAVUseProxy,
  MWebDAVProxyHost,
  MWebDAVProxyPort,
  MWebDAVAuthProxy,
  MWebDAVProxyUsername,
  MWebDAVProxyPassword,

  MConfirmChangeModeTitle,
  MConfirmChangeModeText,
  MRecurseSubdirs,
  MModeUser,
  MModeGroup,
  MModeOther,
  MModeRead,
  MModeWrite,
  MModeExecute,
  MModeSetUID,
  MModeSetGID,
  MModeSticky

};