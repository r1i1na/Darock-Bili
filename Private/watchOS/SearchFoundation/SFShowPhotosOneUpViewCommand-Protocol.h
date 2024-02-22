//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFShowPhotosOneUpViewCommand_Protocol_h
#define SFShowPhotosOneUpViewCommand_Protocol_h
@import Foundation;

#include "SFCommand.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCommandReference.h"
#include "SFPerson.h"
#include "SFPhotosLibraryImage.h"
#include "SFPunchout.h"
#include "SFShowPhotosOneUpViewCommand-Protocol.h"
#include "SFTopic.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFShowPhotosOneUpViewCommand <SFCommand>

@property (retain, nonatomic) SFPhotosLibraryImage *photosLibraryImage;
@property (retain, nonatomic) SFPerson *matchedPerson;
@property (copy, nonatomic) NSArray *matchedScenes;
@property (copy, nonatomic) NSArray *matchedPeople;
@property (retain, nonatomic) SFPunchout *photoFilePunchout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFShowPhotosOneUpViewCommand_Protocol_h */