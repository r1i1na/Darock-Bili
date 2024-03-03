//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.3.3.0.0
//
#ifndef LBFProtoConverter_h
#define LBFProtoConverter_h
@import Foundation;

@interface LBFProtoConverter : NSObject
/* class methods */
+ (id)createBitacoraExperimentIdentifiers:(id)identifiers;
+ (id)createBitacoraBmltIdentifiers:(id)identifiers;
+ (id)createTrialIdentifiers:(id)identifiers;
+ (id)createMLRuntimeTaskEvent:(id)event;
+ (id)createMLRuntimeScheduleStatus:(id)status;
+ (id)createMLRuntimeProto:(id)proto;
+ (id)createMLRuntimeProtoData:(id)data;
+ (id)deserializeMLRuntimeProto:(id)proto;
+ (id)serializeMLRuntimeProtoToJson:(id)json;
+ (id)createLighthousePluginEventStatus:(id)status;
+ (id)createLighthousePluginProto:(id)proto;
+ (id)createLighthousePluginProtoData:(id)data;
+ (id)deserializeLighthousePluginProto:(id)proto;
+ (id)serializeLighthousePluginProtoToJson:(id)json;
+ (id)createTrialdProto:(id)proto;
+ (id)createTrialdProtoData:(id)data;
+ (id)deserializeTrialdProto:(id)proto;
+ (id)serializeTrialdProtoToJson:(id)json;
+ (id)serializeBitacoraStateToJson:(id)json;
@end

#endif /* LBFProtoConverter_h */