//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLInternalTapToRadarManager_h
#define CSLInternalTapToRadarManager_h
@import Foundation;

#include "CSLInternalTapToRadarDelegate-Protocol.h"
#include "CSLInternalTapToRadarDialog.h"

@class NSString;
@protocol OS_os_log;

@interface CSLInternalTapToRadarManager : NSObject<CSLInternalTapToRadarDelegate> {
  /* instance variables */
  CSLInternalTapToRadarDialog *_ttrDialog;
  NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedTapToRadarManager;

/* instance methods */
- (id)init;
- (id)_init;
- (void)requestTapToRadar:(id)radar log:(id)log;
- (void)ttrDialogWasDismissed:(BOOL)dismissed;
@end

#endif /* CSLInternalTapToRadarManager_h */