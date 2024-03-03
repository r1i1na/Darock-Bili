//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef NSError_LTTranslationError_h
#define NSError_LTTranslationError_h
@import Foundation;

@interface NSError (LTTranslationError)
/* class methods */
+ (id)lt_errorWithCode:(long long)code description:(id)description userInfo:(id)info;
+ (id)lt_onlineNotImplementedError;
+ (id)lt_offlineNotImplementedError;
+ (id)lt_invalidRequestErrorWithDescription:(id)description;
+ (id)lt_speechTranslationOngoing;
+ (id)lt_speechLimitExceeded;
+ (id)lt_translationTimeout;
@end

#endif /* NSError_LTTranslationError_h */