//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLProgressStack_h
#define PLProgressStack_h
@import Foundation;

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject

@property (weak, nonatomic) id delegate;
@property (nonatomic) float currentMultiplier;
@property (retain, nonatomic) NSMutableArray *multipliers;
@property (nonatomic) float currentTotal;
@property (nonatomic) BOOL notifyUsingAssetsdNotificationCenter;
@property (retain, nonatomic) NSString *mediaPathString;

/* class methods */
+ (id)unarchiveFromDictionary:(id)dictionary;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)push:(float)push;
- (void)pop;
- (float)totalProgress:(float)progress;
- (void)updateProgress:(float)progress;
- (void)popAndUpdate;
- (void)setCurrentMediaPath:(id)path;
- (id)archiveToDictionary;
@end

#endif /* PLProgressStack_h */