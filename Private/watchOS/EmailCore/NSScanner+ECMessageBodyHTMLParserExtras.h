//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSScanner_ECMessageBodyHTMLParserExtras_h
#define NSScanner_ECMessageBodyHTMLParserExtras_h
@import Foundation;

@interface NSScanner (ECMessageBodyHTMLParserExtras)
/* instance methods */
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfFirstMatchWithRegularExpression:(id)expression;
- (BOOL)ec_scanUpToRegularExpression:(id)expression;
@end

#endif /* NSScanner_ECMessageBodyHTMLParserExtras_h */