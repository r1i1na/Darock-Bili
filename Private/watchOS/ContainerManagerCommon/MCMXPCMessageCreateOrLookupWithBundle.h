//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMXPCMessageCreateOrLookupWithBundle_h
#define MCMXPCMessageCreateOrLookupWithBundle_h
@import Foundation;

#include "MCMXPCMessageBase.h"
#include "MCMParametersCreateOrLookupWithBundle-Protocol.h"

@class NSURL;

@interface MCMXPCMessageCreateOrLookupWithBundle : MCMXPCMessageBase<MCMParametersCreateOrLookupWithBundle>

@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) BOOL issueSandboxExtension;
@property (readonly, nonatomic) const char * sandboxToken;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSURL *executableURL;

/* instance methods */
- (id)initWithXPCObject:(id)xpcobject context:(id)context error:(unsigned long long *)error;
@end

#endif /* MCMXPCMessageCreateOrLookupWithBundle_h */