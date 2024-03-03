//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIFileConverter_Protocol_h
#define NUNIFileConverter_Protocol_h
@import Foundation;

@protocol NUNIFileConverter 
/* instance methods */
- (BOOL)convertFileAt:(id)at to:(id)to error:(id *)error;
- (BOOL)combineFilesAt:(id)at to:(id)to error:(id *)error;
@end

#endif /* NUNIFileConverter_Protocol_h */