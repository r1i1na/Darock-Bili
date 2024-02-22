//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCArgumentSubcommand_h
#define SCRCArgumentSubcommand_h
@import Foundation;

@class NSArray, NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject

@property (retain, nonatomic) NSMutableArray *_optionMutableArray;
@property (readonly, copy, nonatomic) NSArray *optionArray;
@property (copy, nonatomic) NSString *subcommandName;

/* class methods */
+ (id)subcommandWithName:(id)name;

/* instance methods */
- (id)initWithName:(id)name;
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (long long)compare:(id)compare;
- (id)formattedHelpHeader;
- (id)formattedHelpFooter;
- (void)addOption:(char)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;
- (int)run;
- (void)stop;
- (void)stopDueToSigTerm;
- (void)showHelp;
- (id)description;
@end

#endif /* SCRCArgumentSubcommand_h */