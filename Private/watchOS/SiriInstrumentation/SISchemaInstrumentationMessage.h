//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaInstrumentationMessage_h
#define SISchemaInstrumentationMessage_h
@import Foundation;

#include "PBCodable.h"

@interface SISchemaInstrumentationMessage : PBCodable
/* instance methods */
- (void)unwrapMessageWithCompletion:(id /* block */)completion;
- (BOOL)shouldSuppressMessageUnderConditions:(id)conditions;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (id)_pruneSuppressedMessagesFromArray:(id)array underConditions:(id)conditions;
- (id)formattedJsonBody;
- (id)qualifiedMessageName;
- (void)willProduceDictionaryRepresentation:(id)representation;
@end

#endif /* SISchemaInstrumentationMessage_h */