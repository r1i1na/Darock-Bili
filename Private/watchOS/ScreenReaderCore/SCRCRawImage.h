//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCRawImage_h
#define SCRCRawImage_h
@import Foundation;

@interface SCRCRawImage : NSObject

@property (nonatomic) char * data;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long bytesPerPixel;
@property (retain, nonatomic) struct CGImage * imageRef;

/* class methods */
+ (id)rawImageForImage:(struct CGImage *)image;

/* instance methods */
- (void)dealloc;
@end

#endif /* SCRCRawImage_h */