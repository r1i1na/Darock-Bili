//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSComplicationService_h
#define CSLSComplicationService_h
@import Foundation;

@class NSXPCConnection;

@interface CSLSComplicationService : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
}

/* class methods */
+ (id)sharedComplicationService;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)isComplicationBundleIDActive:(id)idactive withCompletion:(id /* block */)completion;
- (void)_disconnect;
@end

#endif /* CSLSComplicationService_h */