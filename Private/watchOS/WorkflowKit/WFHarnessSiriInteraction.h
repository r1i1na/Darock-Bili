//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHarnessSiriInteraction_h
#define WFHarnessSiriInteraction_h
@import Foundation;

#include "WFHarnessActionSelector.h"

@interface WFHarnessSiriInteraction : NSObject

@property (readonly, nonatomic) WFHarnessActionSelector *selector;
@property (readonly, nonatomic) Class siriActionRequestClass;
@property (readonly, nonatomic) id /* block */ interaction;

/* instance methods */
- (id)initWithSelector:(id)selector siriActionRequestClass:(Class)class interaction:(id /* block */)interaction;
@end

#endif /* WFHarnessSiriInteraction_h */