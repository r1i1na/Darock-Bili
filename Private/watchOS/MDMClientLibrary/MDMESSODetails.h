//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef MDMESSODetails_h
#define MDMESSODetails_h
@import Foundation;

@class NSArray, NSData, NSNumber;

@interface MDMESSODetails : NSObject

@property (retain, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSArray *appIDs;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (retain, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (retain, nonatomic) NSData *configurationProfile;

/* class methods */
+ (id)essoDetailsWithJSONDictionary:(id)jsondictionary;

/* instance methods */
- (id)initWithiTunesStoreID:(id)id appIDs:(id)ids associatedDomains:(id)domains associatedDomainsEnableDirectDownloads:(id)downloads configurationProfile:(id)profile;
@end

#endif /* MDMESSODetails_h */