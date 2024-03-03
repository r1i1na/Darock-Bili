//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASAssetCollection_h
#define MSASAssetCollection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface MSASAssetCollection : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long photoNumber;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *email;
@property (nonatomic) BOOL isDeletable;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL hasComments;

/* class methods */
+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)dictionary;
+ (id)assetCollectionWithAssetCollection:(id)collection;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)MSASPProtocolDictionary;
- (id)initWithFileName:(id)name path:(id)path;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)setMetadataValue:(id)value forKey:(id)key;
- (BOOL)hasVideoAsset;
- (BOOL)isVideo;
- (BOOL)isPhotoIris;
- (BOOL)isAutoloopVideo;
- (id)mediaAssetType;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MSASAssetCollection_h */