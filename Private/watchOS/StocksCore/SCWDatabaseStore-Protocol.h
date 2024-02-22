//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWDatabaseStore_Protocol_h
#define SCWDatabaseStore_Protocol_h
@import Foundation;

@protocol SCWDatabaseStore 

@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) BOOL cloudBackupEnabled;

/* instance methods */
- (id)zoneStoreForSchema:(id)schema;
- (BOOL)isCloudBackupEnabled;
@end

#endif /* SCWDatabaseStore_Protocol_h */