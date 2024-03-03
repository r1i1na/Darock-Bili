//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAAutoSettings_h
#define IPAAutoSettings_h
@import Foundation;

#include "IPAAutoSettings-Protocol.h"

@class NSString;

@interface IPAAutoSettings : NSObject<IPAAutoSettings>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)pendingWithIdentifier:(id)identifier;

/* instance methods */
- (BOOL)_applyArchiveDictionary:(id)dictionary;
- (void)_archiveIntoDictionary:(id)dictionary;
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAutoSettings:(id)settings;
- (BOOL)applyArchiveDictionary:(id)dictionary;
- (id)archiveDictionary;
@end

#endif /* IPAAutoSettings_h */