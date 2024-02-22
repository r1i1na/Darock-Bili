//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 178.0.0.0.0
//
#ifndef MontrealModelJSONParser_h
#define MontrealModelJSONParser_h
@import Foundation;

#include "MontrealNNModelNetwork.h"

@class NSDictionary, NSString;

@interface MontrealModelJSONParser : NSObject

@property (readonly) NSString *jsonDir;
@property (readonly) MontrealNNModelNetwork *network;
@property (readonly) NSDictionary *infoDictionary;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)createJSONFromFile:(id)file;
@end

#endif /* MontrealModelJSONParser_h */