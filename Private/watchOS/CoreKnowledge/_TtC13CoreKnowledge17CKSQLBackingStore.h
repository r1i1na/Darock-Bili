//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef _TtC13CoreKnowledge17CKSQLBackingStore_h
#define _TtC13CoreKnowledge17CKSQLBackingStore_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface CoreKnowledge.CKSQLBackingStore : Swift._SwiftObject {
  /* instance variables */
   name;
   connection;
}

/* class methods */
+ (id)directory;
+ (void)setDirectory:(id)directory;

/* instance methods */
- (id)initWithName:(id)name;
@end

#endif /* _TtC13CoreKnowledge17CKSQLBackingStore_h */