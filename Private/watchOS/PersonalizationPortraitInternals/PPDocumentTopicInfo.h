//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPDocumentTopicInfo_h
#define PPDocumentTopicInfo_h
@import Foundation;

@class NSMutableArray;

@interface PPDocumentTopicInfo : NSObject {
  /* instance variables */
  NSMutableArray *_topicAlgorithmCounts;
}

/* instance methods */
- (id)init;
- (void)addToCountForAlgorithm:(unsigned long long)algorithm value:(double)value;
- (double)countForAlgorithm:(unsigned long long)algorithm;
@end

#endif /* PPDocumentTopicInfo_h */