//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAlertItem_h
#define CSLAlertItem_h
@import Foundation;

@class CUISAlertViewController, NSSet, NSString;

@interface CSLAlertItem : NSObject

@property (retain, nonatomic) CUISAlertViewController *alertViewController;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *alertSuppressionContexts;

/* class methods */
+ (id)alertItemWithViewController:(id)controller;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* CSLAlertItem_h */