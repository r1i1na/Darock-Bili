//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 109.0.0.0.0
//
#ifndef NanoResourceGrabber_h
#define NanoResourceGrabber_h
@import Foundation;

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NanoResourceGrabber : NSObject

@property (retain, nonatomic) NSXPCConnection *nrgdConnection;
@property BOOL connectionMayBeValid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iconCacheQueue;

/* class methods */
+ (id)sharedInstance;
+ (id)_iconVariant:(int)variant fromURL:(id)url;
+ (id)nrgIconVariants;
+ (id)liIconVariants;
+ (id)iconDataForVariant:(int)variant proxy:(id)proxy screenScale:(double)scale;
+ (struct CGSize { double x0; double x1; })_sizeForVariant:(int)variant;

/* instance methods */
- (void)dealloc;
- (id)connectToService;
- (id)init;
- (void)getIconForBundleID:(id)id iconVariant:(int)variant block:(id /* block */)block timeout:(double)timeout;
- (void)getIconForBundleID:(id)id iconVariant:(int)variant queue:(id)queue block:(id /* block */)block timeout:(double)timeout;
- (void)_getWatchLocalIconForBundleID:(id)id iconVariant:(int)variant block:(id /* block */)block;
- (void)_setCachedIcon:(id)icon forIconVariant:(int)variant inBundleID:(id)id;
- (id)_getCachedIconForBundleID:(id)id iconVariant:(int)variant;
- (void)getCachedIconForBundleID:(id)id iconVariant:(int)variant outIconImage:(id *)image updateBlock:(id /* block */)block;
- (void)getCachedIconForBundleID:(id)id iconVariant:(int)variant outIconImage:(id *)image queue:(id)queue updateBlock:(id /* block */)block timeout:(double)timeout;
@end

#endif /* NanoResourceGrabber_h */