//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRWrappingIssueResponder_h
#define XRWrappingIssueResponder_h
@import Foundation;

#include "XRIssueResponder-Protocol.h"

@class NSError, NSString;

@interface XRWrappingIssueResponder : NSObject<XRIssueResponder> {
  /* instance variables */
  NSError *_prototype;
  NSObject<XRIssueResponder> *_nextResponder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNextResponder:(id)responder prototype:(id)prototype;
- (id)init;
- (void)handleIssue:(id)issue type:(short)type from:(id)from;
@end

#endif /* XRWrappingIssueResponder_h */