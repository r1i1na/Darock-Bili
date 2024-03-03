//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTranslationSupportedLanguagesResponse_h
#define FTMutableTranslationSupportedLanguagesResponse_h
@import Foundation;

#include "FTTranslationSupportedLanguagesResponse.h"

@class NSArray, NSString;

@interface FTMutableTranslationSupportedLanguagesResponse : FTTranslationSupportedLanguagesResponse

@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSArray *language_pairs;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTranslationSupportedLanguagesResponse_h */