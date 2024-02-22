//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSIndexClientConnection_h
#define CSIndexClientConnection_h
@import Foundation;

#include "MDSearchableIndexService.h"
#include "SDConnectionConfiguration.h"

@interface CSIndexClientConnection : NSObject

@property (readonly, nonatomic) SDConnectionConfiguration *configuration;
@property (readonly, nonatomic) BOOL quotaDisabled;
@property (readonly, nonatomic) MDSearchableIndexService *service;

/* instance methods */
- (id)initWithConfiguration:(id)configuration indexer:(id)indexer;
- (id)initWithConnection:(id)connection indexer:(id)indexer;
@end

#endif /* CSIndexClientConnection_h */