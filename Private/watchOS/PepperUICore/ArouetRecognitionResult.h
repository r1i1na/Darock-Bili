//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef ArouetRecognitionResult_h
#define ArouetRecognitionResult_h
@import Foundation;

@class NSArray, NSString;

@interface ArouetRecognitionResult : NSObject

@property (readonly, nonatomic) NSArray *originalRecognizerResults;
@property (readonly, nonatomic) NSArray *filteredRecognizedStrings;
@property (readonly, nonatomic) NSString *inputPrefix;
@property (readonly, nonatomic) NSArray *recentDeletions;

/* instance methods */
- (id)initWithRecognizerResults:(id)results inputPrefix:(id)prefix recentDeletions:(id)deletions;
- (void)_computeFilteredResults;
- (void)_reorderResultStrings:(id)strings withRecentDeletions:(id)deletions;
@end

#endif /* ArouetRecognitionResult_h */