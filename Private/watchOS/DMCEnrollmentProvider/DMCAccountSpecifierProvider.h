//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCAccountSpecifierProvider_h
#define DMCAccountSpecifierProvider_h
@import Foundation;

@class ACAccountStore;
@protocol DMCAccountSpecifierProviderDelegate, DMCSecondaryAccountViewModelDelegate, OS_dispatch_queue;

@interface DMCAccountSpecifierProvider : NSObject {
  /* instance variables */
  ACAccountStore *_accountStore;
  NSObject<OS_dispatch_queue> *_updateQueue;
}

@property (weak, nonatomic) NSObject<DMCAccountSpecifierProviderDelegate> *delegate;
@property (weak, nonatomic) NSObject<DMCSecondaryAccountViewModelDelegate> *viewModelDelegate;

/* class methods */
+ (id)groupSpecifierID;
+ (id)itemSpecifierIDPrefix;
+ (id)itemSpecifierIDForAccountUsername:(id)username;
+ (id)itemSpecifierIDForReauthAccountUsername:(id)username;

/* instance methods */
- (id)init;
- (id)initWithAccountStore:(id)store;
- (void)dealloc;
- (void)appleAccountsDidChange:(id)change;
- (void)specifiersWithCompletion:(id /* block */)completion;
- (id)specifiersWithTitle:(BOOL)title includePrimaryAccounts:(BOOL)accounts;
- (id)_specifierForManagedAccountGroupWithTitle:(BOOL)title plural:(BOOL)plural;
- (id)_specifierForManagedAccount:(id)account;
- (id)_reauthSpecifierForAccount:(id)account;
- (void)_accountCellWasTappedWithSpecifier:(id)specifier;
- (id)secondaryAccountViewModels;
@end

#endif /* DMCAccountSpecifierProvider_h */