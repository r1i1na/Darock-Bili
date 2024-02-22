//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassBucketTemplate_h
#define PKPassBucketTemplate_h
@import Foundation;

#include "PKPassFieldTemplate.h"

@class NSMutableArray;

@interface PKPassBucketTemplate : NSObject

@property (retain, nonatomic) NSMutableArray *fieldTemplates;
@property (nonatomic) long long bucketAlignment;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bucketRect;
@property (nonatomic) double minFieldPadding;
@property (retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate;
@property (nonatomic) unsigned long long maxFields;
@property (nonatomic) BOOL sitsOnStripImage;

/* instance methods */
- (void)addFieldTemplate:(id)template;
- (id)templateForFieldAtIndex:(unsigned long long)index;
@end

#endif /* PKPassBucketTemplate_h */