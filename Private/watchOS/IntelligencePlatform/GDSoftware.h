//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDSoftware_h
#define GDSoftware_h
@import Foundation;

#include "GDEntity-Protocol.h"
#include "GDEntityIdentifier.h"
#include "GDTripleIteratorEntityRenderer-Protocol.h"

@class NSArray;

@interface GDSoftware : NSObject<GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

/* class methods */
+ (unsigned long long)triplesColumnsRequiredForRendering;

/* instance methods */
- (id)initWithTriplesIterator:(id)iterator;
- (id)description;
@end

#endif /* GDSoftware_h */