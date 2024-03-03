//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRICKAssetMetadata_h
#define TRICKAssetMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRITreatmentQualifiedAssetIndex.h"

@class NSString;

@interface TRICKAssetMetadata : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *namespaceNameForEncryptionKey;
@property (readonly, nonatomic) TRITreatmentQualifiedAssetIndex *treatmentIndex;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) unsigned long long compressionMode;

/* class methods */
+ (id)metadataWithType:(unsigned char)type namespaceNameForEncryptionKey:(id)key treatmentIndex:(id)index downloadSize:(unsigned long long)size compressionMode:(unsigned long long)mode;

/* instance methods */
- (id)initWithType:(unsigned char)type namespaceNameForEncryptionKey:(id)key treatmentIndex:(id)index downloadSize:(unsigned long long)size compressionMode:(unsigned long long)mode;
- (id)copyWithReplacementType:(unsigned char)type;
- (id)copyWithReplacementNamespaceNameForEncryptionKey:(id)key;
- (id)copyWithReplacementTreatmentIndex:(id)index;
- (id)copyWithReplacementDownloadSize:(unsigned long long)size;
- (id)copyWithReplacementCompressionMode:(unsigned long long)mode;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToMetadata:(id)metadata;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRICKAssetMetadata_h */