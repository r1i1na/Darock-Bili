//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.0.0.0.0
//
#ifndef _NSCompositeLayoutRuleNode_h
#define _NSCompositeLayoutRuleNode_h
@import Foundation;

#include "_NSLayoutRuleNode.h"
#include "_NSLayoutRuleNodeParent-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode<_NSLayoutRuleNodeParent> {
  /* instance variables */
  NSMutableArray *_childNodes;
}

@property (readonly, copy) NSArray *_childRuleNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)_addChildRuleNode:(id)node;
- (void)_removeChildRuleNode:(id)node;
@end

#endif /* _NSCompositeLayoutRuleNode_h */