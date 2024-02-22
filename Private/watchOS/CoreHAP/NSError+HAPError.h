//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef NSError_HAPError_h
#define NSError_HAPError_h
@import Foundation;

@interface NSError (HAPError)
/* class methods */
+ (id)_userInfoWithDescription:(id)description reason:(id)reason suggestion:(id)suggestion underlyingError:(id)error;
+ (id)hapErrorWithCode:(long long)code description:(id)description reason:(id)reason suggestion:(id)suggestion underlyingError:(id)error;
+ (id)errorWithOSStatus:(int)osstatus;
+ (id)hapErrorWithCode:(long long)code;
+ (id)errorWithHMErrorCode:(long long)code;
+ (id)errorWithHMErrorCode:(long long)code reason:(id)reason underlyingError:(id)error;
+ (id)errorWithHMErrorCode:(long long)code userInfo:(id)info;

/* instance methods */
- (BOOL)isHAPError;
@end

#endif /* NSError_HAPError_h */