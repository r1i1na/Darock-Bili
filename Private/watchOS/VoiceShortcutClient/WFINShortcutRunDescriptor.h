//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFINShortcutRunDescriptor_h
#define WFINShortcutRunDescriptor_h
@import Foundation;

#include "WFWorkflowRunDescriptor.h"

@class INShortcut;

@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) INShortcut *shortcut;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithShortcut:(id)shortcut;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)kind;
@end

#endif /* WFINShortcutRunDescriptor_h */