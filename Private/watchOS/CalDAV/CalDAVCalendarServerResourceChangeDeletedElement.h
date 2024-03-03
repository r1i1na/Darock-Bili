//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarServerResourceChangeDeletedElement_h
#define CalDAVCalendarServerResourceChangeDeletedElement_h
@import Foundation;

#include "CalDAVCalendarServerResourceChangeElement.h"

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) ICSDateValue *nextInstance;
@property (nonatomic) BOOL hadMoreInstances;

/* instance methods */
- (id)init;
- (void)setDeletedDetails:(id)details;
- (id)copyParseRules;
@end

#endif /* CalDAVCalendarServerResourceChangeDeletedElement_h */