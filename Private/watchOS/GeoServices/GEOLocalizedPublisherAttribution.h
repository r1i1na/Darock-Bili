//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLocalizedPublisherAttribution_h
#define GEOLocalizedPublisherAttribution_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOLocalizedPublisherAttribution : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_iconIdentifier; unsigned int x :1 has_logoCenteredColorizedIdentifier; unsigned int x :1 has_logoCenteredIdentifier; unsigned int x :1 has_logoIdentifier; unsigned int x :1 has_logoWithoutPaddingIdentifier; unsigned int x :1 read_displayName; unsigned int x :1 read_language; unsigned int x :1 read_subtitle; unsigned int x :1 read_themeColorDarkMode; unsigned int x :1 read_themeColorLightMode; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasIconIdentifier;
@property (nonatomic) unsigned int iconIdentifier;
@property (nonatomic) BOOL hasLogoIdentifier;
@property (nonatomic) unsigned int logoIdentifier;
@property (nonatomic) BOOL hasLogoCenteredIdentifier;
@property (nonatomic) unsigned int logoCenteredIdentifier;
@property (readonly, nonatomic) BOOL hasThemeColorLightMode;
@property (retain, nonatomic) NSString *themeColorLightMode;
@property (readonly, nonatomic) BOOL hasThemeColorDarkMode;
@property (retain, nonatomic) NSString *themeColorDarkMode;
@property (nonatomic) BOOL hasLogoCenteredColorizedIdentifier;
@property (nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (nonatomic) BOOL hasLogoWithoutPaddingIdentifier;
@property (nonatomic) unsigned int logoWithoutPaddingIdentifier;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLocalizedPublisherAttribution_h */