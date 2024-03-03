//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFHomeAccessCode_h
#define _MKFHomeAccessCode_h
@import Foundation;

#include "_MKFModel.h"
#include "MKFHomeAccessCode-Protocol.h"
#include "MKFHomeAccessCodeDatabaseID.h"
#include "MKFHomeAccessCodePrivateExtensions-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface _MKFHomeAccessCode : _MKFModel<MKFHomeAccessCode, MKFHomeAccessCodePrivateExtensions>

@property (copy, @dynamic, nonatomic) NSString *accessCode;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (copy, @dynamic, nonatomic) NSString *accessCode;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) MKFHomeAccessCodeDatabaseID *databaseID;
@property (readonly, copy, @dynamic, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (id)backingModelProtocol;

/* instance methods */
- (BOOL)validateAccessCodeForInsertOrUpdate:(id *)update;
- (id)homeForHomeAccessCode:(id)code;
- (id)fetchOtherUserAccessCodesInHome:(id)home;
- (id)fetchOtherGuestAccessCodesInHome:(id)home;
- (BOOL)validateForInsertOrUpdate:(id *)update;
- (id)castIfHomeAccessCode;
@end

#endif /* _MKFHomeAccessCode_h */