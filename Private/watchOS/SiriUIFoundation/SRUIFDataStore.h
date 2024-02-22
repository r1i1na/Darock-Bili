//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.13.3.0.0
//
#ifndef SRUIFDataStore_h
#define SRUIFDataStore_h
@import Foundation;

@class NSMutableDictionary;

@interface SRUIFDataStore : NSObject {
  /* instance variables */
  NSMutableDictionary *_entries;
}

/* instance methods */
- (id)initWithEntries:(id)entries;
- (id)init;
- (void)setImageData:(id)data forKey:(id)key;
- (id)imageDataForKey:(id)key;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)representation;
@end

#endif /* SRUIFDataStore_h */