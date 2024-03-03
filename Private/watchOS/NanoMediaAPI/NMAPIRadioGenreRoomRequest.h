//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMAPIRadioGenreRoomRequest_h
#define NMAPIRadioGenreRoomRequest_h
@import Foundation;

#include "NMAPIRequest.h"

@class NSURL;

@interface NMAPIRadioGenreRoomRequest : NMAPIRequest

@property (copy, nonatomic) NSURL *URL;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)urlComponentsWithStoreURLBag:(id)urlbag error:(id *)error;
- (id)_roomIdentifierWithStoreURLBag:(id)urlbag;
- (id)_bagRoomURLRegularExpressionWithStoreURLBag:(id)urlbag;
- (Class)responseParserClass;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NMAPIRadioGenreRoomRequest_h */