//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUClassInfo_h
#define VMUClassInfo_h
@import Foundation;

#include "VMUClassInfo.h"

@class NSMutableArray, NSString;

@interface VMUClassInfo : NSObject {
  /* instance variables */
  unsigned int _remotePointerSize;
  unsigned int _ro_flags;
  unsigned int _rw_flags;
  unsigned int _remoteType;
  id * _localIvarList;
  NSString *_remoteClassName;
  NSString *_remoteBinaryPath;
  VMUClassInfo *_superclassLayout;
  VMUClassInfo *_genericLayout;
  NSMutableArray *_variantEvaluators;
  NSMutableArray *_variantActions;
  NSMutableArray *_complexVariantEvaluators;
  NSMutableArray *_complexVariantActions;
  const char * _weakLayout;
  const char * _strongLayout;
}

@property (readonly, nonatomic) unsigned int defaultScanType;
@property (readonly, nonatomic) BOOL hasSpecificLayout;
@property (readonly, nonatomic) BOOL hasVariantLayout;
@property (readonly, nonatomic) unsigned int pointerSize;
@property (readonly, nonatomic) BOOL usesSwiftRefcounting;
@property (readonly, nonatomic) unsigned int ivarCount;
@property (readonly, nonatomic) unsigned int superclassOffset;
@property (nonatomic) BOOL isDerivedFromStackBacktrace;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *binaryName;
@property (readonly, nonatomic) NSString *binaryPath;
@property (readonly, nonatomic) NSString *fullIvarDescription;
@property (readonly, nonatomic) NSString *shortIvarDescription;
@property (readonly, nonatomic) VMUClassInfo *superclassInfo;
@property (readonly, nonatomic) VMUClassInfo *genericInfo;
@property (readonly) unsigned int infoType;
@property (readonly) unsigned long long remoteIsa;
@property (readonly) unsigned int instanceSize;
@property (readonly) BOOL isARR;
@property (readonly) BOOL isRealized;
@property (readonly) BOOL isMetaClass;
@property (readonly) BOOL isRootClass;
@property (readonly) BOOL hasCppConstructorOrDestructor;
@property (readonly) BOOL isCoreMediaFigObject;

/* class methods */
+ (void)initialize;
+ (id)_genericBlockByrefInfo;
+ (id)classInfoWithClassName:(id)name binaryPath:(id)path type:(unsigned int)type;
+ (id)descriptionForTypeEncoding:(const char *)encoding ivarName:(const char *)name;
+ (unsigned long long)sizeofClassStructure;

/* instance methods */
- (void)_processARRLayout:(const char *)arrlayout scanType:(unsigned int)type;
- (void)_parseIvarsAndLayouts;
- (void)_demangleClassName;
- (void)_setClassNameWithAddress:(unsigned long long)address targetTask:(id)task;
- (void)_setDisplayName:(id)name;
- (void)_setBinaryPath:(id)path sanitize:(BOOL)sanitize;
- (void)_setSuperclassInfo:(id)info;
- (void)_setIsCoreMediaFigObject:(BOOL)object;
- (void)_setDefaultScanType:(unsigned int)type;
- (void)_setInstanceSize:(unsigned int)size;
- (void)_setIsRootClass:(BOOL)class;
- (void)_setInfoType:(unsigned int)type;
- (id)initWithClassName:(id)name binaryPath:(id)path type:(unsigned int)type;
- (id)initWithClosureContext:(unsigned long long)context typeInfo:(struct swift_typeinfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })info infoMap:(id)map swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionInteropContext * x0; unsigned long long x1; } *)context;
- (id)initSwiftClassWithName:(id)name classInfoType:(unsigned int)type size:(unsigned long long)size;
- (unsigned int)_objcABIFromObjectIdentifier:(id)identifier;
- (id)_initWithClass:(unsigned long long)class type:(unsigned int)type realizedOnly:(BOOL)only infoMap:(id)map objectIdentifier:(id)identifier reader:(id /* block */)reader;
- (void)_determineBinaryPathUsingObjectIdentifier:(id)identifier remoteClassNameLoc:(unsigned long long)loc;
- (id)initWithClass:(unsigned long long)class type:(unsigned int)type infoMap:(id)map objectIdentifier:(id)identifier reader:(id /* block */)reader;
- (id)initWithRealizedClass:(unsigned long long)class type:(unsigned int)type infoMap:(id)map objectIdentifier:(id)identifier reader:(id /* block */)reader;
- (void)_freeLocalIvarList;
- (void)dealloc;
- (id)mutableCopy;
- (void)_identifyObjCClassStructureBlocksForIsa:(unsigned long long)isa isMetaclass:(BOOL)metaclass withScanner:(id)scanner addressIdentifierBlock:(id /* block */)block;
- (void)identifyObjCClassStructureBlocksWithScanner:(id)scanner addressIdentifierBlock:(id /* block */)block;
- (void)serializeWithClassMap:(id)map simpleSerializer:(id)serializer version:(unsigned int)version;
- (id)initWithSerializer:(id)serializer classMap:(id)map version:(unsigned int)version error:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)_logDescriptionWithSuperclasses:(BOOL)superclasses indentation:(int)indentation toLogger:(id /* block */)logger;
- (void)enumerateSublayoutsForSize:(unsigned int)size withBlock:(id /* block */)block;
- (id)_copyWithInstanceSize:(unsigned int)size superclassOffset:(unsigned int)offset asVariant:(BOOL)variant mutable:(BOOL)mutable;
- (void)_applyExtendedLayout:(const char *)layout withSize:(unsigned int)size;
- (id)instanceSpecificInfoForObject:(unsigned long long)object ofSize:(unsigned int)size memoryReader:(id /* block */)reader;
- (id)instanceSpecificInfoForObject:(unsigned long long)object ofSize:(unsigned int)size withScanner:(id)scanner memoryReader:(id /* block */)reader;
- (void)enumerateStoredEntriesForObject:(unsigned long long)object ofSize:(unsigned int)size externalValues:(id)values block:(id /* block */)block;
- (void)enumerateExternalValuesFromObject:(unsigned long long)object withSize:(unsigned int)size block:(id /* block */)block;
- (unsigned int)_totalIvarCount;
- (void)enumerateClassHierarchyWithBlock:(id /* block */)block;
- (void)enumerateAllFieldsWithBlock:(id /* block */)block;
- (void)enumerateTypeFieldsWithBlock:(id /* block */)block;
- (void)enumerateScanningLocationsForSize:(unsigned int)size withBlock:(id /* block */)block;
- (id)fieldAtOrBeforeOffset:(unsigned int)offset;
- (id)firstFieldWithName:(id)name;
- (void)_adjustInstanceSize;
- (void)_addFields:(id)fields;
- (void)_replaceField:(id)field withFields:(id)fields;
- (void)_replaceFieldRecursively:(id)recursively withField:(id)field;
- (void)_setFields:(id)fields;
- (void)_addVariantAction:(id /* block */)action withEvaluator:(id /* block */)evaluator;
- (void)_addComplexAction:(id /* block */)action withEvaluator:(id /* block */)evaluator;
- (void)_setIsa:(unsigned long long)isa;
- (id)type;
- (id)scanDescriptionWithSize:(unsigned int)size;
- (id)debugDescription;
- (id)description;
@end

#endif /* VMUClassInfo_h */