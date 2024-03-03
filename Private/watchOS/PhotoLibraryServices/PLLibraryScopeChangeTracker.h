//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLibraryScopeChangeTracker_h
#define PLLibraryScopeChangeTracker_h
@import Foundation;

@class NSDictionary, NSManagedObjectContext, NSPersistentHistoryToken;
@protocol PLLibraryScopeChangeTrackerDelegate;

@interface PLLibraryScopeChangeTracker : NSObject {
  /* instance variables */
  NSPersistentHistoryToken *_lastKnownToken;
  NSManagedObjectContext *_context;
  NSDictionary *_entityNameToAllowedPropertyDescriptionMap;
}

@property (weak, nonatomic) NSObject<PLLibraryScopeChangeTrackerDelegate> *delegate;
@property (readonly) BOOL hasChangeTrackerToken;

/* class methods */
+ (id)archivedDataWithToken:(id)token;
+ (id)unarchiveTokentWithData:(id)data;

/* instance methods */
- (id)initWithManagedObjectContext:(id)context;
- (void)clearToken;
- (BOOL)start;
- (id)currentToken;
- (id)lastKnownTokenFromDisk;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)stop;
- (id)fetchObjectsNeedingEvaluation;
- (id)fetchResultsSincePersistentHistoryToken:(id)token;
- (id)_transactionIteratorSinceToken:(id)token;
- (id)_allowedPropertyDescriptionsForEntityName:(id)name;
- (void)updateLastKnownTokenToResult:(id)result;
@end

#endif /* PLLibraryScopeChangeTracker_h */