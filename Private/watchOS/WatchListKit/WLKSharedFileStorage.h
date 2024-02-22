//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKSharedFileStorage_h
#define WLKSharedFileStorage_h
@import Foundation;

@class NSFileCoordinator, NSString, NSURL;

@interface WLKSharedFileStorage : NSObject {
  /* instance variables */
  NSURL *_fileURL;
  NSFileCoordinator *_coordinator;
  Class _class;
  NSString *_debugString;
}

/* instance methods */
- (id)initWithFileName:(id)name class:(Class)class;
- (void)read:(id /* block */)read;
- (void)write:(id)write completion:(id /* block */)completion;
- (void)merge:(id)merge completion:(id /* block */)completion;
- (void)delete:(id /* block */)delete;
- (id)_readDataFromURL:(id)url error:(id *)error;
- (BOOL)_writeData:(id)data toURL:(id)url error:(id *)error;
@end

#endif /* WLKSharedFileStorage_h */