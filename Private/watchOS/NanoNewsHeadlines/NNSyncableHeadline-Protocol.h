//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NNSyncableHeadline_Protocol_h
#define NNSyncableHeadline_Protocol_h
@import Foundation;

@protocol NNSyncableHeadline <NSObject>

@property (readonly, nonatomic) NSString *sync_identifier;
@property (readonly, nonatomic) NSString *sync_title;
@property (readonly, nonatomic) NSString *sync_excerpt;
@property (readonly, nonatomic) NSData *sync_thumbnailImageData;
@property (readonly, nonatomic) NSData *sync_publisherLogoImageData;
@property (readonly, nonatomic) NSString *sync_publisherName;
@property (readonly, nonatomic) NSString *sync_publisherIdentifier;
@property (readonly, nonatomic) NSString *sync_webURLString;
@property (readonly, nonatomic) NSString *sync_NewsURLString;

@end

#endif /* NNSyncableHeadline_Protocol_h */