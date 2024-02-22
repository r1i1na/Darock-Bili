//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSMutableWidgetDescriptor_h
#define CHSMutableWidgetDescriptor_h
@import Foundation;

#include "CHSWidgetDescriptor.h"
#include "CHSExtensionIdentity.h"
#include "CHSIntentRecommendationsContainer.h"
#include "CHSIntentReference.h"

@class INIntent, NSData, NSDictionary, NSString;

@interface CHSMutableWidgetDescriptor : CHSWidgetDescriptor

@property (copy, @dynamic, nonatomic) NSData *localeToken;
@property (copy, @dynamic, nonatomic) NSString *eventMachServiceName;
@property (copy, @dynamic, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (@dynamic, nonatomic) long long preferredBackgroundStyle;
@property (@dynamic, nonatomic) BOOL supportsVibrantContent;
@property (@dynamic, nonatomic) BOOL supportsInteraction;
@property (copy, @dynamic, nonatomic) NSDictionary *disfavoredLocations;
@property (@dynamic, nonatomic) BOOL enablesMultipleTapTargets;
@property (@dynamic, nonatomic) BOOL backgroundRemovable;
@property (retain, @dynamic, nonatomic) CHSIntentRecommendationsContainer *intentRecommendationsContainer;
@property (copy, @dynamic, nonatomic) NSString *sdkVersion;
@property (@dynamic, nonatomic) unsigned long long platform;
@property (copy, @dynamic, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (copy, @dynamic, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *kind;
@property (@dynamic, nonatomic) unsigned long long supportedFamilies;
@property (@dynamic, nonatomic) long long widgetVisibility;
@property (copy, @dynamic, nonatomic) NSString *intentType;
@property (copy, @dynamic, nonatomic) NSString *displayName;
@property (copy, @dynamic, nonatomic) NSString *widgetDescription;
@property (copy, @dynamic, nonatomic) NSString *containerBundleIdentifier;
@property (@dynamic, nonatomic) BOOL transparent;
@property (copy, @dynamic, nonatomic) INIntent *defaultIntent;
@property (copy, @dynamic, nonatomic) CHSIntentReference *defaultIntentReference;
@property (@dynamic, nonatomic) BOOL hiddenBySensitiveUI;

/* instance methods */
- (void)setDisfavoredLocations:(unsigned long long)locations on:(long long)on;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CHSMutableWidgetDescriptor_h */