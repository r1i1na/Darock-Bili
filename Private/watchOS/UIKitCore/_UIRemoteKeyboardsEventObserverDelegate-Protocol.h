//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRemoteKeyboardsEventObserverDelegate_Protocol_h
#define _UIRemoteKeyboardsEventObserverDelegate_Protocol_h
@import Foundation;

@protocol _UIRemoteKeyboardsEventObserverDelegate <NSObject>
/* instance methods */
- (long long)lastEventSource;
- (void)updateEventSource:(long long)source options:(unsigned long long)options;
- (void)updateEventSource:(long long)source options:(unsigned long long)options responder:(id)responder;
@end

#endif /* _UIRemoteKeyboardsEventObserverDelegate_Protocol_h */