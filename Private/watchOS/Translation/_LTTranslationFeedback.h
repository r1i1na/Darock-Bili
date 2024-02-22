//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTTranslationFeedback_h
#define _LTTranslationFeedback_h
@import Foundation;

#include "_LTLocalePair.h"
#include "_LTLoggingRequest-Protocol.h"

@class NSString, NSURL;

@interface _LTTranslationFeedback : NSObject<_LTLoggingRequest>

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSString *sourceContentAsJSON;
@property (copy, nonatomic) NSString *targetContentAsJSON;
@property (copy, nonatomic) NSString *errorsAsJSON;
@property (copy, nonatomic) NSString *safariVersion;
@property (copy, nonatomic) NSURL *webpageURL;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (nonatomic) long long category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _LTTranslationFeedback_h */