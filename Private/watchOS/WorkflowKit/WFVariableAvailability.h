//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFVariableAvailability_h
#define WFVariableAvailability_h
@import Foundation;

#include "WFWorkflow.h"

@class NSCache, NSHashTable, NSMapTable;
@protocol OS_dispatch_queue;

@interface WFVariableAvailability : NSObject

@property (retain, nonatomic) NSMapTable *providingActionsByVariableName;
@property (retain, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier;
@property (retain, nonatomic) NSMapTable *variableScopeEndActionsByStartAction;
@property (retain, nonatomic) NSMapTable *actionOutputVariableActionsByUUID;
@property (retain, nonatomic) NSHashTable *actionsUsingShortcutInputVariable;
@property (retain, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex;
@property (retain, nonatomic) NSHashTable *variableObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) BOOL shortcutInputVariableUsed;

/* class methods */
+ (BOOL)actionIsEligibleForOutputVariable:(id)variable;

/* instance methods */
- (id)initWithWorkflow:(id)workflow;
- (void)populateCache;
- (void)invalidateCache;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)action;
- (id)availableVariableNamesAtIndex:(unsigned long long)index;
- (BOOL)areVariablesAvailableAtIndex:(unsigned long long)index;
- (BOOL)isVariableWithName:(id)name availableAtIndex:(unsigned long long)index;
- (BOOL)isVariableAvailableAtIndex:(unsigned long long)index withActionTest:(id /* block */)test;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)index usingBlock:(id /* block */)block;
- (BOOL)areActionOutputVariablesAvailableAtIndex:(unsigned long long)index;
- (id)availableOutputActionsAtIndex:(unsigned long long)index;
- (void)populateActionOutputVariableActionsByUUID;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)uuidavailable atIndex:(unsigned long long)index;
- (id)actionProvidingVariableWithOutputUUID:(id)uuid;
- (void)invalidateActionOutputProviderCache;
- (BOOL)isShortcutInputVariableUsed;
- (void)updateShortcutInputVariableUsageForChangeInAction:(id)action removed:(BOOL)removed;
- (void)populateActionsUsingShortcutInputVariableCache;
- (void)invalidateActionsUsingShortcutInputVariableCache;
- (id)actionsProvidingVariableName:(id)name atIndex:(unsigned long long)index;
- (id)_possibleContentClassesForVariableNamed:(id)named atIndex:(unsigned long long)index context:(id)context excludingAction:(id)action;
- (id)possibleContentClassesForVariableNamed:(id)named atIndex:(unsigned long long)index context:(id)context excludingAction:(id)action;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)identifier;
- (void)addVariableObserver:(id)observer;
- (void)removeVariableObserver:(id)observer;
- (void)notifyVariablesChanged;
- (void)notifyContentClassesChanged;
- (void)actionDidChange:(id)change moved:(BOOL)moved removed:(BOOL)removed;
- (void)renameVariable:(id)variable to:(id)to fromAction:(id)action;
- (void)invalidateContentClassCache;
- (void)actionsDidMove;
@end

#endif /* WFVariableAvailability_h */