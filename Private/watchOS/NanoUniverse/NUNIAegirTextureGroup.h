//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIAegirTextureGroup_h
#define NUNIAegirTextureGroup_h
@import Foundation;

@class CLKUITexture, NSArray;

@interface NUNIAegirTextureGroup : NSObject

@property (retain, nonatomic) NSArray *albedos;
@property (retain, nonatomic) NSArray *normals;
@property (retain, nonatomic) NSArray *emissives;
@property (retain, nonatomic) NSArray *cloudsLo;
@property (retain, nonatomic) NSArray *cloudsMd;
@property (retain, nonatomic) NSArray *cloudsHi;
@property (retain, nonatomic) NSArray *gradients;
@property (retain, nonatomic) CLKUITexture *starfield;

/* instance methods */
@end

#endif /* NUNIAegirTextureGroup_h */