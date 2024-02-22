//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef NSMutableURLRequest_ICAdditions_h
#define NSMutableURLRequest_ICAdditions_h
@import Foundation;

@interface NSMutableURLRequest (ICAdditions)
/* instance methods */
- (void)ic_appendHTTPCookies:(id)httpcookies;
- (void)ic_appendHTTPCookieWithName:(id)name value:(id)value;
@end

#endif /* NSMutableURLRequest_ICAdditions_h */