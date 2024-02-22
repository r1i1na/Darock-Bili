//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBTouchOrderedTaskList_h
#define UIKBTouchOrderedTaskList_h
@import Foundation;

@class NSMutableArray, NSUUID, NSValue;
@protocol OS_dispatch_queue;

@interface UIKBTouchOrderedTaskList : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_touchStateTasksQueue;
  NSMutableArray *_touchStateTasks;
}

@property (readonly, nonatomic) NSUUID *touchUUID;
@property (readonly, nonatomic) unsigned long long pathIndex;
@property (readonly, nonatomic) double originalStartTime;
@property (readonly, nonatomic) NSValue *currentTouchPoint;
@property (nonatomic) BOOL ignoredOnBegin;
@property (readonly, nonatomic) BOOL hasTasks;

/* class methods */
+ (id)taskListForTouchUUID:(id)uuid withPathIndex:(unsigned long long)index;

/* instance methods */
- (id)initWithTouchUUID:(id)uuid withPathIndex:(unsigned long long)index;
- (void)dealloc;
- (void)addTask:(id)task;
- (BOOL)isExecutingFirstTask;
- (void)removeTasksMatchingFilter:(id /* block */)filter;
- (BOOL)executeTasksInView:(id)view withBlock:(id /* block */)block;
- (id)firstTouchStateForUITouchPhase:(long long)phase;
@end

#endif /* UIKBTouchOrderedTaskList_h */