//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBFileURLMetaData_h
#define BLTPBFileURLMetaData_h
@import Foundation;

@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long sequenceNumberError;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, nonatomic) NSDictionary *extraMetadata;

/* instance methods */
- (id)initWithSequenceNumberManager:(id)manager extraMetadata:(id)metadata;
- (id)initWithMetadata:(id)metadata sequenceNumberManager:(id)manager;
- (id)transportData;
@end

#endif /* BLTPBFileURLMetaData_h */