//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVPropStatItem_h
#define CoreDAVPropStatItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVErrorItem.h"
#include "CoreDAVItem.h"
#include "CoreDAVLeafItem.h"

@interface CoreDAVPropStatItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *status;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVErrorItem *errorItem;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* CoreDAVPropStatItem_h */