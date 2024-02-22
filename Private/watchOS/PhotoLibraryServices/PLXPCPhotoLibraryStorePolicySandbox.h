//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLXPCPhotoLibraryStorePolicySandbox_h
#define PLXPCPhotoLibraryStorePolicySandbox_h
@import Foundation;

#include "PLXPCPhotoLibraryStorePolicy-Protocol.h"

@class NSString;

@interface PLXPCPhotoLibraryStorePolicySandbox : NSObject<PLXPCPhotoLibraryStorePolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)hasSandboxAccessForPath:(id)path;
- (BOOL)shouldUseXPCStoreForDatabasePath:(id)path auditToken:(struct { unsigned int x0[8] })token;
@end

#endif /* PLXPCPhotoLibraryStorePolicySandbox_h */