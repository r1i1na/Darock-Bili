//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFDeleteSiriHistoryContext_h
#define AFDeleteSiriHistoryContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFDeleteSiriHistoryContext : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *successTitle;
@property (readonly, copy, nonatomic) NSString *successBody;
@property (readonly, copy, nonatomic) NSString *successButtonText;
@property (readonly, copy, nonatomic) NSString *errorTitle;
@property (readonly, copy, nonatomic) NSString *errorBody;
@property (readonly, copy, nonatomic) NSString *errorButtonText;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithSuccessTitle:(id)title successBody:(id)body successButtonText:(id)text errorTitle:(id)title errorBody:(id)body errorButtonText:(id)text;
- (id)description;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AFDeleteSiriHistoryContext_h */