//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2TLVParamAccessoryList_h
#define HAP2TLVParamAccessoryList_h
@import Foundation;

#include "HAPTLVProtocol-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface HAP2TLVParamAccessoryList : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSMutableArray *accessorySignatureList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithAccessorySignatureList:(id)list;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAP2TLVParamAccessoryList_h */