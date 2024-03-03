//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSConfigurationSecureRecord_h
#define DNDSConfigurationSecureRecord_h
@import Foundation;

#include "DNDSBackingStoreRecord-Protocol.h"
#include "DNDSSenderConfigurationRecord.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface DNDSConfigurationSecureRecord : NSObject<NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) DNDSSenderConfigurationRecord *senderConfiguration;
@property (readonly, copy, nonatomic) NSDictionary *allowedApplications;
@property (readonly, copy, nonatomic) NSSet *deniedApplications;
@property (readonly, copy, nonatomic) NSSet *allowedWebApplications;
@property (readonly, copy, nonatomic) NSSet *deniedWebApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)migrateDictionaryRepresentation:(id)representation fromVersionNumber:(unsigned long long)number toVersionNumber:(unsigned long long)number;
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)init;
- (id)_initWithRecord:(id)record;
- (id)_initWithSenderConfiguration:(id)configuration allowedApplications:(id)applications deniedApplications:(id)applications allowedWebApplications:(id)applications deniedWebApplications:(id)applications;
- (void)log:(id)log withPrefix:(id)prefix;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDSConfigurationSecureRecord_h */