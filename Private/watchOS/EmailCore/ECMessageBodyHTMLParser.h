//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECMessageBodyHTMLParser_h
#define ECMessageBodyHTMLParser_h
@import Foundation;

#include "ECMessageBodyParser.h"

@class NSScanner;

@interface ECMessageBodyHTMLParser : ECMessageBodyParser {
  /* instance variables */
  NSScanner *_scanner;
}

/* instance methods */
- (id)initWithHTML:(id)html;
- (void)dealloc;
- (unsigned long long)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;
- (void)_consumeNodesFromNode:(id)node upToNode:(id)node;
- (BOOL)_isMilestoneTagName:(id)name;
- (void)_findBody;
- (BOOL)parse;
- (void)didFindError:(id)error;
@end

#endif /* ECMessageBodyHTMLParser_h */