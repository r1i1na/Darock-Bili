//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSAccount_h
#define IDSAccount_h
@import Foundation;

#include "_IDSAccount.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface IDSAccount : NSObject {
  /* instance variables */
  _IDSAccount *_internal;
}

@property (readonly, nonatomic) NSString *userUniqueIdentifier;
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly, retain, nonatomic) _IDSAccount *_internal;
@property (readonly, nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL _isEnabled;
@property (readonly, nonatomic) BOOL isUsableForOuterMessaging;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasStrings;
@property (readonly, nonatomic) NSArray *vettedAliases;
@property (readonly, nonatomic) NSArray *handles;
@property (readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property (readonly, nonatomic) NSArray *pseudonyms;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (retain, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) long long profileValidationStatus;
@property (readonly, nonatomic) int profileValidationErrorReason;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSArray *accountRegisteredURIs;
@property (readonly, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) NSDate *dateRegistered;
@property (readonly, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSDictionary *regionServerContext;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) BOOL isUserDisabled;
@property (retain, nonatomic) NSString *regionID;
@property (retain, nonatomic) NSString *regionBasePhoneNumber;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *loginID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *nearbyDevices;

/* instance methods */
- (id)matchingSim;
- (id)_initWithDictionary:(id)dictionary uniqueID:(id)id serviceName:(id)name;
- (id)initWithDictionary:(id)dictionary uniqueID:(id)id serviceName:(id)name;
- (id)initWithLoginID:(id)id uniqueID:(id)id serviceName:(id)name;
- (void)dealloc;
- (void)setPassword:(id)password;
- (void)setAuthToken:(id)token;
- (void)_setIsEnabled:(BOOL)enabled;
- (void)updateAccountWithAccountInfo:(id)info;
- (void)addDelegate:(id)delegate queue:(id)queue;
- (void)removeDelegate:(id)delegate;
- (void)addRegistrationDelegate:(id)delegate queue:(id)queue;
- (void)removeRegistrationDelegate:(id)delegate;
- (id)description;
- (void)authenticateAccount;
- (void)passwordUpdated;
- (void)updateAuthorizationCredentials:(id)credentials token:(id)token;
- (void)validateProfile;
- (void)addAliases:(id)aliases;
- (void)removeAliases:(id)aliases;
- (void)validateAliases:(id)aliases;
- (void)unvalidateAliases:(id)aliases;
- (void)registerAccount;
- (void)unregisterAccount;
- (void)forceRemoveAccount;
- (void)_reregisterAndReidentify:(BOOL)reidentify;
- (void)deactivateAndPurgeIdentify;
- (void)_callNearbyDevicesChanged;
- (void)_reloadCachedDevices;
@end

#endif /* IDSAccount_h */