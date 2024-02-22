//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkEntityContentItem_h
#define WFLinkEntityContentItem_h
@import Foundation;

#include "WFContentItem.h"

@class LNDisplayRepresentation, LNEntity;

@interface WFLinkEntityContentItem : WFContentItem

@property (readonly, nonatomic) LNEntity *entity;
@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation;

/* class methods */
+ (id)entityMetadata;
+ (id)queryMetadata;
+ (id)appBundleIdentifier;
+ (id)displayedAppBundleIdentifier;
+ (BOOL)hasInMemoryFindAction;
+ (void)initialize;
+ (id)propertyBuilders;
+ (id)allProperties;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)metadata objectClass:(Class)class operators:(id)operators;
+ (id)ownedTypes;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)localizedCountDescriptionWithValue:(long long)value;
+ (BOOL)hasLibrary;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isNotes;
+ (BOOL)isNoteEntity;
+ (BOOL)isNoteFolderEntityIdentifier:(id)identifier;
+ (id)outputTypes;

/* instance methods */
- (void)copyStateToItem:(id)item;
- (Class)classForCopying;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)name;
- (BOOL)getListSubtitle:(id /* block */)subtitle;
- (BOOL)getListThumbnail:(id /* block */)thumbnail forSize:(struct CGSize { double x0; double x1; })size;
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
@end

#endif /* WFLinkEntityContentItem_h */