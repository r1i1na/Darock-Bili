//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef NSURL_GKAdditions_h
#define NSURL_GKAdditions_h
@import Foundation;

@interface NSURL (GKAdditions)
/* class methods */
+ (id)_gkGenerateFriendRequestURL:(id)url;

/* instance methods */
- (id)cacheKeyRepresentation;
- (BOOL)_gkIsValidServerURL;
- (BOOL)_gkIsSecure;
- (id)_gkURLByAddingQueryParameters:(id)parameters;
- (id)_gkURLByReplacingSchemeWithScheme:(id)scheme;
@end

#endif /* NSURL_GKAdditions_h */