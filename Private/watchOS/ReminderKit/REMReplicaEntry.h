//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMReplicaEntry_h
#define REMReplicaEntry_h
@import Foundation;

#include "REMClockElementList.h"
#include "REMReplicaManagerClient-Protocol.h"

@interface REMReplicaEntry : NSObject

@property (nonatomic) unsigned int replicaUUIDIndex;
@property (retain, nonatomic) REMClockElementList *clockElementList;
@property (nonatomic) BOOL inUse;
@property (nonatomic) NSObject<REMReplicaManagerClient> *client;

/* instance methods */
- (id)initWithReplicaUUIDIndex:(unsigned int)uuidindex clockElementList:(id)list inUse:(BOOL)use forClient:(id)client;
- (void)encodeIntoEntryArchive:(void *)archive;
- (id)initWithEntryArchive:(const void *)archive;
- (id)description;
- (id)persistenceDescription;
- (BOOL)hasEqualPersistedPropertiesAs:(id)as;
@end

#endif /* REMReplicaEntry_h */