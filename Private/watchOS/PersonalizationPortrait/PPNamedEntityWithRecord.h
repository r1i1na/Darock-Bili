//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPNamedEntityWithRecord_h
#define PPNamedEntityWithRecord_h
@import Foundation;

#include "PPNamedEntity.h"
#include "PPNamedEntityRecord.h"

@interface PPNamedEntityWithRecord : PPNamedEntity {
  /* instance variables */
  PPNamedEntityRecord *_mostRelevantRecord;
}

/* instance methods */
- (id)initWithName:(id)name category:(unsigned long long)category dynamicCategory:(id)category language:(id)language mostRelevantRecord:(id)record;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mostRelevantRecord;
- (id)description;
- (double)sentimentScore;
@end

#endif /* PPNamedEntityWithRecord_h */