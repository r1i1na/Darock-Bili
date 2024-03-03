//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMFindMyHandle_h
#define IMFindMyHandle_h
@import Foundation;

@class FMFHandle, FMLHandle, NSString;

@interface IMFindMyHandle : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FMFHandle *fmfHandle;
@property (readonly, nonatomic) FMLHandle *fmlHandle;

/* class methods */
+ (id)handleWithFMFHandle:(id)fmfhandle;
+ (id)handleWithFMLHandle:(id)fmlhandle;
+ (id)handleWithIdentifier:(id)identifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* IMFindMyHandle_h */