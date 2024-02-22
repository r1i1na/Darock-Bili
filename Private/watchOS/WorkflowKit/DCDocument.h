//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef DCDocument_h
#define DCDocument_h
@import Foundation;

@class NSURL;

@interface DCDocument : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) id annotation;

/* class methods */
+ (id)documentWithURL:(id)url;
+ (id)documentWithURL:(id)url annotation:(id)annotation;

/* instance methods */
- (id)initWithURL:(id)url annotation:(id)annotation;
- (void)openWithAppBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)openInDefaultAppWithCompletionHandler:(id /* block */)handler;
@end

#endif /* DCDocument_h */