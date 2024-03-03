//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebAVMediaSelectionOption_h
#define WebAVMediaSelectionOption_h
@import Foundation;

@class NSString;
@protocol {RetainPtr<NSString>="m_ptr"^v};

@interface WebAVMediaSelectionOption : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

/* instance methods */
- (id)initWithMediaType:(id)type displayName:(id)name;
- (id)mediaSubTypes;
- (BOOL)hasMediaCharacteristic:(id)characteristic;
- (BOOL)isPlayable;
- (id)extendedLanguageTag;
- (id)locale;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)format;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)group;
- (id)propertyList;
- (id)displayNameWithLocale:(id)locale;
- (id)mediaCharacteristics;
- (id)outOfBandSource;
- (id)outOfBandIdentifier;
- (BOOL)_isDesignatedDefault;
- (id)languageCode;
- (id)track;
@end

#endif /* WebAVMediaSelectionOption_h */