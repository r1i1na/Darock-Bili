//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNCollation_h
#define CNCollation_h
@import Foundation;

@class NSArray, NSString;

@interface CNCollation : NSObject

@property (readonly) NSArray *headerLanguages;
@property (readonly) NSArray *indexSections;
@property (readonly) NSString *searchTransform;
@property (readonly) NSString *nameTransform;
@property (readonly) NSString *searchCollatorIdentifier;
@property (readonly) NSString *sortCollatorIdentifier;
@property (readonly) BOOL indexExtraTokenizations;

/* class methods */
+ (id)sectionURL;
+ (id)defaultSortCollatorIdentifier;
+ (id)indexSectionsFromPropertyList:(id)list;
+ (id)languageHeaderSectionsFromPropertyList:(id)list collator:(struct UCollator *)collator;

/* instance methods */
- (id)init;
- (id)initWithCollator:(struct UCollator *)collator;
- (id)initWithCollator:(struct UCollator *)collator URL:(id)url;
@end

#endif /* CNCollation_h */