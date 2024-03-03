//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNNotificationAttachment_Staging_h
#define UNNotificationAttachment_Staging_h
@import Foundation;

@interface UNNotificationAttachment (Staging)
/* class methods */
+ (id)_systemDirectoryURL;
+ (unsigned long long)stagingActionForFileHandle:(id)handle fromLocalClientConnection:(id)connection orFromServiceExtensionOfBundleProxy:(id)proxy servicingBundleIdentifier:(id)identifier error:(id *)error;
@end

#endif /* UNNotificationAttachment_Staging_h */