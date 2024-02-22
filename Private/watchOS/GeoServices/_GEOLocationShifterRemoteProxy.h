//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOLocationShifterRemoteProxy_h
#define _GEOLocationShifterRemoteProxy_h
@import Foundation;

#include "_GEOLocationShifterProxy-Protocol.h"

@class NSCache, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface _GEOLocationShifterRemoteProxy : NSObject<_GEOLocationShifterProxy> {
  /* instance variables */
  NSNumber *_shiftingEnabled;
  NSNumber *_shiftingFxnVersion;
  NSCache *_shiftFunctionCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)shiftLatLng:(id)lng auditToken:(id)token completionHandler:(id /* block */)handler;
- (BOOL)isLocationShiftEnabled;
- (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })coordinate;
- (BOOL)_isLocationShiftRequiredForCoordinateInProcess:(struct { double x0; double x1; })process;
- (BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(struct { double x0; double x1; })proxy;
- (unsigned int)locationShiftFunctionVersion;
- (void)flushDiskCache;
@end

#endif /* _GEOLocationShifterRemoteProxy_h */