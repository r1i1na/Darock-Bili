//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSBagDataSourceProtocol_Protocol_h
#define AMSBagDataSourceProtocol_Protocol_h
@import Foundation;

@protocol AMSBagDataSourceProtocol <NSObject>

@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL loaded;
@property (readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (copy, nonatomic) id /* block */ dataSourceChangedHandler;
@property (copy, nonatomic) id /* block */ dataSourceDataInvalidatedHandler;

/* instance methods */
- (id)defaultValueForKey:(id)key;
- (void)loadWithCompletion:(id /* block */)completion;
- (void)setDefaultValue:(id)value forKey:(id)key;
- (id)valueForURLVariable:(id)urlvariable account:(id)account;
- (void)valueForURLVariable:(id)urlvariable account:(id)account completion:(id /* block */)completion;
- (BOOL)isLoaded;
@optional
/* instance methods */
- (id)loadedValuesForKeys:(id)keys;
@end

#endif /* AMSBagDataSourceProtocol_Protocol_h */