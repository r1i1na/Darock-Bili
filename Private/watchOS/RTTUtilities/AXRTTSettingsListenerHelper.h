//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef AXRTTSettingsListenerHelper_h
#define AXRTTSettingsListenerHelper_h
@import Foundation;

@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject {
  /* instance variables */
  void * _listenerAddress;
  NSMutableArray *_selectorKeys;
}

/* instance methods */
- (id)initWithListenerAddress:(void *)address;
- (void)addSelectorKey:(SEL)key;
- (void)dealloc;
@end

#endif /* AXRTTSettingsListenerHelper_h */