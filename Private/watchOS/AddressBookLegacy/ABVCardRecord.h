//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABVCardRecord_h
#define ABVCardRecord_h
@import Foundation;

@interface ABVCardRecord : NSObject {
  /* instance variables */
  void * _record;
  struct __CFArray * _properties;
}

/* class methods */
+ (struct __CFArray *)supportedProperties;
+ (BOOL)privateVCardEnabled;
+ (void)setPrivateVCardEnabled:(BOOL)enabled;
+ (void)setVCardField:(id)field isPrivate:(BOOL)private;
+ (void)clearPrivateFields;
+ (BOOL)vcardFieldisPrivate:(id)private;
+ (void)setIncludeNotesInVCards:(BOOL)vcards;
+ (BOOL)includeNotesInVCards;
+ (void)setIncludeAddressingGrammarInVCards:(BOOL)vcards;
+ (BOOL)includeAddressingGrammarInVCards;
+ (void)setIncludeREVInVCards:(BOOL)vcards;
+ (BOOL)includeREVInVCards;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeABClipRectInVCardPhotos;
+ (void)setIncludePhotosInVCards:(BOOL)vcards;
+ (BOOL)includePhotosInVCards;
+ (BOOL)includeWallpaperURIInVCards;

/* instance methods */
- (id)initWithRecord:(void *)record;
- (id)init;
- (id)initWithVCardRepresentation:(id)representation;
- (void)dealloc;
- (id)vCardRepresentationForMode:(int)mode;
- (void *)record;
- (BOOL)setValue:(void *)value forProperty:(unsigned int)property;
- (BOOL)_showField:(unsigned int)field;
- (BOOL)_showField:(unsigned int)field identifier:(int)identifier;
- (id)_vCardKeyForAddressLabel:(id)label vCard3:(BOOL)card3;
- (struct __CFString *)_vCardKeyForGenericLabel:(id)label;
- (id)_vCardKeysForPhoneLabel:(id)label;
- (struct __CFString *)_vCardKeyForEmailLabel:(id)label;
- (void)appendLabel:(id)label toVCardRep:(id)rep inGroup:(id)group;
- (id)newISO8061StringFromDate:(id)date;
- (id)ISO8061StringFromDate:(id)date;
- (id)ISO8061StringFromDateTime:(id)time;
- (id)stringForAlternateBirthdayComponent:(id)component key:(id)key formatWidth:(int)width;
- (id)stringFromAlternateBirthday:(id)birthday;
- (void *)copyValueForProperty:(unsigned int)property;
- (void *)valueForProperty:(unsigned int)property;
- (id)propertyLineForGenericABProperty:(unsigned int)abproperty vCardProperty:(id)property is21:(BOOL)is21 groupCount:(long long *)count;
- (id)propertyLineForInstantMessageHandles:(BOOL)handles groupCount:(long long *)count includePrivateData:(BOOL)data;
- (id)propertyLineForIMPPProperty:(BOOL)imppproperty groupCount:(long long *)count includePrivateData:(BOOL)data;
- (id)propertyLineForGenericABProperty21:(unsigned int)abproperty21 vCardProperty:(id)property;
- (id)dataForSocialProfileProperty:(void *)property groupCount:(long long *)count includePrivateData:(BOOL)data;
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;
- (id)dataForInstantMessageProperties;
- (id)_valueForPersonSounds:(void *)sounds identifier:(int)identifier;
- (void)_addPersonSounds:(void *)sounds identifier:(int)identifier toActivityAlerts:(id *)alerts activity:(id)activity alert:(id)alert;
- (id)_dictionaryForActivityAlerts;
- (id)_typeParameterForToneType:(id)type;
- (id)dataForSoundProperty:(void *)property;
- (id)encodedLineForValue:(id)value;
- (id)encodedDataForValue:(id)value charsetName:(id *)name;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;
- (BOOL)_isCompany;
- (id)_fullName;
- (id)alternateName;
- (id)_realCompositeName;
- (id)sharedPhotoDisplayPreferenceStringValue;
- (id)_21vCardRepresentationAsData;
- (BOOL)useThumbnailImageFormatIfAvailable;
- (id)imageData;
- (id)_prodID;
- (BOOL)_usesArrayForExternalPropKey:(id)key;
- (void)_appendPropValue:(id)value forPropKey:(id)key toOutString:(id)string usingDelimiter:(id)delimiter inGroup:(id)group;
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters includePrivateData:(BOOL)data includeWallpaper:(BOOL)wallpaper;
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;
@end

#endif /* ABVCardRecord_h */