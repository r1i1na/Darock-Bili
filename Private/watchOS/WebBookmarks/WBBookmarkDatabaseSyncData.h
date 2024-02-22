//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBBookmarkDatabaseSyncData_h
#define WBBookmarkDatabaseSyncData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSSet;

@interface WBBookmarkDatabaseSyncData : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  long long _lastChangeID;
}

@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToLastServerChangeTokens;
@property (nonatomic) BOOL didNotSaveRecordsAfterMigration;
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (readonly, nonatomic) long long nextChangeID;
@property (nonatomic) long long minimumSyncAPIVersion;
@property (copy, nonatomic) NSSet *auxiliaryRecordIDsToDelete;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)databaseSyncDataWithContentsOfData:(id)data;
+ (id)databaseSyncDataInDatabase:(void *)database databaseAccessor:(id)accessor;

/* instance methods */
- (id)init;
- (void)writeToDatabase:(void *)database databaseAccessor:(id)accessor;
- (void)clearAllLastServerChangeTokens;
- (id)lastServerChangeTokenForRecordZoneID:(id)id;
- (void)setLastServerChangeToken:(id)token forRecordZoneID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WBBookmarkDatabaseSyncData_h */