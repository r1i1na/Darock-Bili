//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHTokenizedURL_h
#define SHTokenizedURL_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SHTokenizedURL : NSObject<NSCopying>

@property (copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *tokenURLPath;
@property (copy, nonatomic) NSString *originalURLPath;
@property (retain, nonatomic) NSMutableDictionary *tokenDictionary;

/* class methods */
+ (id)replaceToken:(long long)token withValue:(id)value urlString:(id)string;
+ (id)tokenForTokenType:(long long)type;

/* instance methods */
- (id)initWithString:(id)string;
- (id)initWithHost:(id)host URLPath:(id)urlpath;
- (BOOL)updateToken:(long long)token withValue:(id)value;
- (id)URLRepresentation;
- (BOOL)containsToken:(long long)token;
- (BOOL)containsTokens;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SHTokenizedURL_h */