//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1033.64.3.0.0
//
#ifndef TransparencyError_h
#define TransparencyError_h
@import Foundation;

#include "NSError.h"

@interface TransparencyError : NSError
/* class methods */
+ (id)unimplementedError:(id)error;
+ (id)truncateUnderlyingErrorDepth:(id)depth maxDepth:(unsigned long long)depth;
+ (id)errorWithDomain:(id)domain code:(long long)code errorLevel:(unsigned long long)level underlyingError:(id)error userinfo:(id)userinfo description:(id)description arguments:(char *)arguments;
+ (id)errorWithDomain:(id)domain code:(long long)code errorLevel:(unsigned long long)level underlyingError:(id)error userinfo:(id)userinfo description:(id)description;
+ (id)errorWithDomain:(id)domain code:(long long)code underlyingError:(id)error userinfo:(id)userinfo description:(id)description;
+ (id)errorWithDomain:(id)domain code:(long long)code errorLevel:(unsigned long long)level underlyingError:(id)error description:(id)description arguments:(char *)arguments;
+ (id)errorWithDomain:(id)domain code:(long long)code errorLevel:(unsigned long long)level underlyingError:(id)error description:(id)description;
+ (id)errorWithDomain:(id)domain code:(long long)code underlyingError:(id)error description:(id)description;
+ (id)errorWithDomain:(id)domain code:(long long)code description:(id)description;
+ (BOOL)hasUnknownSPKIHashError:(id)error;
+ (id)errorWithError:(id)error underlyingError:(id)error;
+ (id)diagnosticUserInfoValue:(id)value depth:(unsigned long long)depth;
+ (id)diagnosticUserInfo:(id)info depth:(unsigned long long)depth;
+ (id)diagnosticError:(id)error depth:(unsigned long long)depth;
+ (id)diagnosticError:(id)error;
@end

#endif /* TransparencyError_h */