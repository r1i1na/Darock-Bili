//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoRule_h
#define VCVideoRule_h
@import Foundation;

@class NSString;

@interface VCVideoRule : NSObject {
  /* instance variables */
  int _width;
  int _height;
  float _frameRate;
  float _priority;
  int _payload;
}

@property (readonly, nonatomic) int iWidth;
@property (readonly, nonatomic) int iHeight;
@property (readonly, nonatomic) float fRate;
@property (readonly, nonatomic) int iPayload;
@property (readonly, nonatomic) NSString *description;
@property (nonatomic) float fPref;

/* instance methods */
- (id)initWithFrameWidth:(int)width frameHeight:(int)height frameRate:(float)rate payload:(int)payload priority:(float)priority;
- (id)initWithFrameWidth:(int)width frameHeight:(int)height frameRate:(float)rate;
- (id)initWithFrameWidth:(int)width frameHeight:(int)height frameRate:(float)rate payload:(int)payload;
- (long long)compare:(id)compare;
- (BOOL)isEqual:(id)equal;
- (long long)compareByPref:(id)pref;
- (void)setToVideoRule:(id)rule;
- (void)setFrameWidth:(int)width frameHeight:(int)height frameRate:(float)rate;
- (BOOL)isVideoFullHD;
@end

#endif /* VCVideoRule_h */