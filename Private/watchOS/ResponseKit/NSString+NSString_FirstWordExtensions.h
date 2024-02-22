//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef NSString_NSString_FirstWordExtensions_h
#define NSString_NSString_FirstWordExtensions_h
@import Foundation;

@interface NSString (NSString_FirstWordExtensions)
/* instance methods */
- (BOOL)consistsOfCharactersFromSet:(id)set options:(unsigned long long)options;
- (id)stringByEscapingXMLEntities;
- (id)stringByUnescapingXMLEntities;
- (id)lowercaseFirstWordString;
- (id)uppercaseFirstWordString;
@end

#endif /* NSString_NSString_FirstWordExtensions_h */