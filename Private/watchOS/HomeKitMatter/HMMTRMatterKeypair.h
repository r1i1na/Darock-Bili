//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMTRMatterKeypair_h
#define HMMTRMatterKeypair_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "MTRKeypair-Protocol.h"

@class NSData, NSString;

@interface HMMTRMatterKeypair : HMFObject<HMFLogging, MTRKeypair>

@property BOOL initialized;
@property (readonly) unsigned long long version;
@property (readonly) struct __SecKey * publicKey;
@property (retain) NSString *keychainAccount;
@property (retain) NSData *keyRepr;
@property (retain) NSData *opKeyRepr;
@property (readonly) struct __SecKey * privateKey;
@property (@dynamic) struct __SecKey * operationalKey;
@property (readonly, copy) NSData *rootCert;
@property (readonly, copy) NSData *operationalCert;
@property (readonly, copy) NSData *ipk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithV0Account:(id)account;
- (id)initWithV0Account:(id)account privateKey:(struct __SecKey *)key;
- (id)initWithTLVData:(id)tlvdata;
- (id)initWithPrivateKey:(struct __SecKey *)key;
- (id)initUnassociated;
- (id)initWithV1Account:(id)account;
- (id)initWithV1Account:(id)account privateKey:(struct __SecKey *)key operationalKey:(struct __SecKey *)key rootCert:(id)cert operationalCert:(id)cert ipk:(id)ipk;
- (BOOL)initializeAllowingNew:(BOOL)new;
- (id)serialize;
- (BOOL)deserialize:(id)deserialize;
- (id)signMessageECDSA_DER:(id)der;
- (struct __SecKey *)pubkey;
- (id)unarchiveV1KeyItemValue:(id)value;
- (id)archiveV1KeyItemValue;
- (BOOL)reload;
- (BOOL)_storePrivateKeyData:(id)data;
- (BOOL)_generateKeys;
- (id)_getPrivateKeydata;
- (BOOL)_reloadWithData:(id)data;
- (BOOL)_reloadWithDictionary:(id)dictionary;
- (struct __SecKey *)createPrivateKeyWithData:(id)data;
@end

#endif /* HMMTRMatterKeypair_h */