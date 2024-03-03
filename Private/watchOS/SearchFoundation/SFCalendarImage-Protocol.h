//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFCalendarImage_Protocol_h
#define SFCalendarImage_Protocol_h
@import Foundation;

#include "SFImage.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCalendarImage-Protocol.h"
#include "SFImage.h"

@class NSData, NSDate, NSDictionary, NSString;

@protocol SFCalendarImage <SFImage>

@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFCalendarImage_Protocol_h */