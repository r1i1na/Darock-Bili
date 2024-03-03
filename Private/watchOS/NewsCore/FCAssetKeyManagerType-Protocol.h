//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAssetKeyManagerType_Protocol_h
#define FCAssetKeyManagerType_Protocol_h
@import Foundation;

@protocol FCAssetKeyManagerType 
/* instance methods */
- (id)cachedWrappingKeyWithID:(id)id;
- (void)fetchWrappingKeyWithID:(id)id completionHandler:(id /* block */)handler;
- (void)clearUnauthorizedAssetKeys;
- (void)eraseAllKeys;
@end

#endif /* FCAssetKeyManagerType_Protocol_h */