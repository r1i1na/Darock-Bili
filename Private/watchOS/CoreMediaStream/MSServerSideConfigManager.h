//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSServerSideConfigManager_h
#define MSServerSideConfigManager_h
@import Foundation;

#include "MSMediaStreamDaemon.h"
#include "MSServerSideConfigProtocol.h"
#include "MSServerSideConfigProtocolDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface MSServerSideConfigManager : NSObject<MSServerSideConfigProtocolDelegate> {
  /* instance variables */
  NSString *_configPath;
  MSServerSideConfigProtocol *_protocol;
  int _state;
}

@property (readonly, nonatomic) NSString *personID;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)configManagerForPersonID:(id)id;
+ (id)existingConfigManagerForPersonID:(id)id;
+ (void)abortAllActivities;
+ (void)forgetPersonID:(id)id;
+ (int)intValueForParameter:(id)parameter forPersonID:(id)id defaultValue:(int)value;
+ (double)doubleValueForParameter:(id)parameter forPersonID:(id)id defaultValue:(double)value;
+ (long long)longValueForParameter:(id)parameter forPersonID:(id)id defaultValue:(long long)value;
+ (long long)longLongValueForParameter:(id)parameter forPersonID:(id)id defaultValue:(long long)value;
+ (id)objectForKey:(id)key forPersonID:(id)id defaultValue:(id)value;

/* instance methods */
- (id)initWithPersonID:(id)id baseURL:(id)url;
- (void)dealloc;
- (void)refreshConfiguration;
- (void)abort;
- (void)serverSideConfigProtocol:(id)protocol didFinishWithConfiguration:(id)configuration error:(id)error;
- (void)serverSideConfigProtocol:(id)protocol didReceiveAuthenticationError:(id)error;
@end

#endif /* MSServerSideConfigManager_h */