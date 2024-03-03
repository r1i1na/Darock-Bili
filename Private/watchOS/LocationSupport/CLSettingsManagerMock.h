//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLSettingsManagerMock_h
#define CLSettingsManagerMock_h
@import Foundation;

#include "CLSettingsManagerInternal.h"
#include "CLSettingsManagerMockProtocol-Protocol.h"

@class NSString;

@interface CLSettingsManagerMock : CLSettingsManagerInternal<CLSettingsManagerMockProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setSettings:(id)settings;
@end

#endif /* CLSettingsManagerMock_h */