//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKChatItemCachedSizeMetrics_h
#define CKChatItemCachedSizeMetrics_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class IMDoubleLinkedListNode, NSDate, NSString;

@interface CKChatItemCachedSizeMetrics : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *chatItemGUID;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textAlignmentInsets;
@property (retain, nonatomic) NSDate *lastAccess;
@property (retain, nonatomic) IMDoubleLinkedListNode *node;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* CKChatItemCachedSizeMetrics_h */