//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsBlockDeduper_h
#define MapsSuggestionsBlockDeduper_h
@import Foundation;

#include "MapsSuggestionsBaseDeduper.h"
#include "MapsSuggestionsDeduper-Protocol.h"

@class NSString;

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper<MapsSuggestionsDeduper> {
  /* instance variables */
  id /* block */ _block;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)deduperWithBlock:(id /* block */)block;
+ (BOOL)isEnabled;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (BOOL)dedupeByEnrichingEntry:(id)entry withEntry:(id)entry;
@end

#endif /* MapsSuggestionsBlockDeduper_h */