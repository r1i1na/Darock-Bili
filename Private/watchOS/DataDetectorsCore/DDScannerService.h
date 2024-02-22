//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 757.6.0.0.0
//
#ifndef DDScannerService_h
#define DDScannerService_h
@import Foundation;

@interface DDScannerService : NSObject
/* class methods */
+ (void)appendWatchOSLinksToString:(id)string;
+ (id)scanString:(id)string range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range configuration:(id)configuration;
+ (id)scanQuery:(struct __DDScanQuery *)query configuration:(id)configuration;
+ (id)scanString:(id)string;
+ (long long)scanString:(id)string range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range configuration:(id)configuration completionBlock:(id /* block */)block;
+ (long long)scanQuery:(struct __DDScanQuery *)query configuration:(id)configuration completionBlock:(id /* block */)block;
+ (long long)scanString:(id)string completionBlock:(id /* block */)block;
+ (void)cancelJob:(long long)job;
@end

#endif /* DDScannerService_h */