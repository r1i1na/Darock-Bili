//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef DAFolderChangeConsumer_Protocol_h
#define DAFolderChangeConsumer_Protocol_h
@import Foundation;

@protocol DAFolderChangeConsumer 
/* instance methods */
- (void)folderChange:(id)change finishedWithStatus:(long long)status error:(id)error;
@end

#endif /* DAFolderChangeConsumer_Protocol_h */