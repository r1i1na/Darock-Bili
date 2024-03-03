//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLTaggedPointer_h
#define PLTaggedPointer_h
@import Foundation;

@interface PLTaggedPointer : NSObject {
  /* instance variables */
  union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

/* class methods */
+ (BOOL)taggedPointersEnabled;
+ (unsigned short)tag;
+ (id)newInstanceWithPayload:(unsigned long long)payload;
+ (id)newInstanceWithSignedPayload:(long long)payload;

/* instance methods */
- (id)initWithPayload:(unsigned long long)payload;
- (id)initWithSignedPayload:(long long)payload;
- (unsigned long long)payload;
- (long long)signedPayload;
- (BOOL)isTaggedPointer;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PLTaggedPointer_h */