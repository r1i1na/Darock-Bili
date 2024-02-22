//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPuzzleTypeSettingsDelegate_Protocol_h
#define FCPuzzleTypeSettingsDelegate_Protocol_h
@import Foundation;

@protocol FCPuzzleTypeSettingsDelegate <NSObject>
/* instance methods */
- (void)addModifyPuzzleTypeSettingsCommandToCommandQueue:(id)queue;
- (void)settingsDataDidChangeForPuzzleTypeID:(id)id;
@end

#endif /* FCPuzzleTypeSettingsDelegate_Protocol_h */