//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDStructuredDataFoundationOutputPointerWriter_h
#define HMDStructuredDataFoundationOutputPointerWriter_h
@import Foundation;

#include "HMDStructuredDataFoundationWriter.h"

@interface HMDStructuredDataFoundationOutputPointerWriter : HMDStructuredDataFoundationWriter {
  /* instance variables */
  id * _output;
}

/* instance methods */
- (void)emitRootValue:(id)value;
@end

#endif /* HMDStructuredDataFoundationOutputPointerWriter_h */