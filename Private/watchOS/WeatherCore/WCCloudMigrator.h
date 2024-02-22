//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 513.0.0.0.0
//
#ifndef WCCloudMigrator_h
#define WCCloudMigrator_h
@import Foundation;

#include "WCDeviceLookup.h"

@interface WCCloudMigrator : NSObject

@property (readonly, nonatomic) WCDeviceLookup *deviceLookup;

/* instance methods */
- (id)init;
- (BOOL)storeRequiresMigration:(id)migration;
- (void)migrateStore:(id)store toStore:(id)store completionBlock:(id /* block */)block;
- (void)eraseStoreIfNeeded:(id)needed;
@end

#endif /* WCCloudMigrator_h */