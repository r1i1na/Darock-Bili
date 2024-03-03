//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMHandleRegistrar_h
#define IMHandleRegistrar_h
@import Foundation;

@class IMBusinessNameManager, NSHashTable, NSMutableDictionary;

@interface IMHandleRegistrar : NSObject {
  /* instance variables */
  NSMutableDictionary *_siblingsMap;
  NSHashTable *_allIMHandles;
  NSMutableDictionary *_IDToHandlesMap;
  NSMutableDictionary *_CNIDToHandlesMap;
  IMBusinessNameManager *_businessNameManager;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)_handleDeleteContactChangeHistoryEvent:(id)event;
- (void)_handleAddContactChangeHistoryEvent:(id)event;
- (void)_handleUpdateContactChangeHistoryEvent:(id)event;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)ids andCNContact:(id)cncontact;
- (void)_postContactChangeHistoryEventClientNotifications;
- (void)_addressBookChanged;
- (id)init;
- (void)_emptySiblingCacheForIMHandleGUID:(id)guid;
- (void)_buildSiblingsForIMHandle:(id)imhandle;
- (void)_clearSiblingsCacheForIMHandle:(id)imhandle rebuildAfter:(BOOL)after;
- (void)addHandleToCNIDMap:(id)cnidmap CNContact:(id)cncontact;
- (id)handlesForCNIdentifier:(id)cnidentifier;
- (void)removeHandleFromCNIDMap:(id)cnidmap withCNID:(id)cnid;
- (void)clearCNIDToHandlesMap;
- (id)CNIDToHandlesMap;
- (void)registerIMHandle:(id)imhandle;
- (void)unregisterIMHandle:(id)imhandle;
- (void)clearSiblingCacheForIMHandle:(id)imhandle;
- (id)siblingsForIMHandle:(id)imhandle;
- (void)_addIMHandleToIDToHandlesMap:(id)map;
- (void)_removeIMHandleToIDToHandlesMap:(id)map;
- (id)IDToHandlesMap;
- (id)allIMHandles;
- (id)getIMHandlesForID:(id)id;
- (id)getIDsForInitialBatch;
- (id)getIDsForFinalBatch;
- (id)getIDsForAllIMHandles;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)account;
- (id)_accountSiblingsForHandle:(id)handle;
- (id)_existingAccountSiblingsForHandle:(id)handle;
- (id)_chatSiblingsForHandle:(id)handle;
- (id)_existingChatSiblingsForHandle:(id)handle;
- (id)businessNameForUID:(id)uid updateHandler:(id /* block */)handler;
@end

#endif /* IMHandleRegistrar_h */