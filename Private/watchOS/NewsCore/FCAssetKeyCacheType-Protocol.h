//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAssetKeyCacheType_Protocol_h
#define FCAssetKeyCacheType_Protocol_h
@import Foundation;

@protocol FCAssetKeyCacheType <NSObject>
/* instance methods */
- (id)wrappingKeyForWrappingKeyID:(id)id;
- (id)interestTokenForWrappingKeyIDs:(id)ids;
- (void)setWrappingKey:(id)key forWrappingKeyID:(id)id;
- (void)removeAllWrappingKeys;
@end

#endif /* FCAssetKeyCacheType_Protocol_h */