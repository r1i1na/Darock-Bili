//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDownloadManifestResponse_h
#define SSDownloadManifestResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSArray, NSString;

@interface SSDownloadManifestResponse : NSObject<SSXPCCoding, NSSecureCoding>

@property (copy) NSArray *validDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
@end

#endif /* SSDownloadManifestResponse_h */