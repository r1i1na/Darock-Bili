//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUObjectGraph_h
#define VMUObjectGraph_h
@import Foundation;

#include "VMUDirectedGraph.h"
#include "VMUClassInfoMap.h"
#include "VMUObjectGraph.h"

@interface VMUObjectGraph : VMUDirectedGraph {
  /* instance variables */
  struct _VMUObjectGraphEdge { union { struct { unsigned int x0 :24; unsigned int x1 :2; unsigned int x2 :5; unsigned int x3 :1; } x0; struct { unsigned int x0 :31; unsigned int x1 :1; } x1; } x0; } * _referenceTable;
  unsigned int _referenceTableCapacity;
  struct _VMUObjectGraphEdgeLarge { unsigned int x0 :56; unsigned int x1 :8; unsigned int x2 :56; unsigned int x3 :8; } * _referenceTableLarge;
  unsigned int _referenceTableLargeCount;
  unsigned int _referenceTableLargeCapacity;
  struct _VMUBlockNode { unsigned long long x0; unsigned int x1 :3; unsigned int x2 :2; unsigned int x3 :36; unsigned int x4 :23; } * _internalizedNodes;
  unsigned int _internalizedCount;
  id * _classInfos;
  VMUClassInfoMap *_knownClassInfos;
  unsigned int _classInfosCount;
  id /* block */ _nodeProvider;
  VMUObjectGraph *_referenceGraph;
  unsigned int _referenceGraphNodeNamespaceSize;
  unsigned int _referenceGraphEdgeNamespaceSize;
  int _referencingCount;
}

@property (retain, nonatomic) VMUClassInfoMap *indexedClassInfos;

/* instance methods */
- (void)stronglyConnectedComponentSearch:(unsigned int)search withRecorder:(id /* block */)recorder;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)node toNodes:(void *)nodes;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)node toNodes:(void *)nodes;
- (BOOL)isGroupNode:(unsigned int)node;
- (BOOL)isRootNode:(unsigned int)node;
- (id)initWithNodeCount:(unsigned int)count nodeProvider:(id /* block */)provider;
- (id)initWithNodesNoCopy:(struct _VMUBlockNode { unsigned long long x0; unsigned int x1 :3; unsigned int x2 :2; unsigned int x3 :36; unsigned int x4 :23; } *)copy nodeCount:(unsigned int)count;
- (void)dealloc;
- (id)initWithArchived:(id)archived version:(long long)version options:(unsigned long long)options diskLogs:(id)logs error:(id *)error;
- (void)archiveDictionaryRepresentation:(id)representation options:(unsigned long long)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)hasClassInfosDerivedFromStackBacktraces;
- (void)internalizeNodes;
- (BOOL)_commonHighAddressBit;
- (void)setClassInfoIndex:(unsigned int)index forNode:(unsigned int)node;
- (unsigned int)addEdgeFromNode:(unsigned int)node sourceOffset:(unsigned long long)offset withScanType:(unsigned int)type toNode:(unsigned int)node destinationOffset:(unsigned long long)offset;
- (unsigned int)addEdgeFromNode:(unsigned int)node toNode:(unsigned int)node;
- (void)_renameWithNodeMap:(unsigned int *)map nodeNamespace:(unsigned int)namespace edgeMap:(unsigned int *)map edgeNamespace:(unsigned int)namespace;
- (unsigned int)scanTypeOfReferenceWithName:(unsigned int)name;
- (unsigned int)nodeForAddress:(unsigned long long)address;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)block;
- (unsigned int)enumerateObjectsOfGroupNode:(unsigned int)node withBlock:(id /* block */)block;
- (unsigned int)enumerateMarkedObjects:(void *)objects withBlock:(id /* block */)block;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)block;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)node withBlock:(id /* block */)block;
- (unsigned int)nodeReferencedFromSourceNode:(unsigned int)node byIvarWithName:(id)name;
- (unsigned int)enumerateObjectsContainedInCollection:(unsigned int)collection withBlock:(id /* block */)block;
- (struct { unsigned long long x0; unsigned int x1 :60; unsigned int x2 :4; id x3; })nodeDetails:(unsigned int)details;
- (struct { unsigned long long x0; unsigned int x1; unsigned long long x2; })referenceInfoWithName:(unsigned int)name;
- (struct { unsigned long long x0; unsigned int x1; unsigned long long x2; })_rawReferenceInfoWithName:(unsigned int)name;
- (void)_modifyDerivativeGraphCount:(int)count;
- (void)_refineTypesWithOverlay:(id)overlay;
- (void *)_compareWithGraph:(id)graph andMarkOnMatch:(BOOL)match;
- (void *)createMapForMinusGraph:(id)graph;
- (void *)createMapForIntersectGraph:(id)graph;
@end

#endif /* VMUObjectGraph_h */