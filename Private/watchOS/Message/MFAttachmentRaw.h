//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFAttachmentRaw_h
#define MFAttachmentRaw_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface MFAttachmentRaw : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *contentID;

/* class methods */
+ (id)attachmentData:(id)data fileName:(id)name mimeType:(id)type;
+ (id)attachmentData:(id)data fileName:(id)name mimeType:(id)type contentID:(id)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MFAttachmentRaw_h */