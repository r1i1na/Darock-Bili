//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef StockUpdaterDelegate_Protocol_h
#define StockUpdaterDelegate_Protocol_h
@import Foundation;

@protocol StockUpdaterDelegate <NSObject>
/* instance methods */
- (void)stockUpdater:(id)updater didRequestUpdateForStocks:(id)stocks isComprehensive:(BOOL)comprehensive;
- (void)stockUpdater:(id)updater didUpdateStocks:(id)stocks isComprehensive:(BOOL)comprehensive;
- (void)stockUpdater:(id)updater didFailWithError:(id)error whileUpdatingStocks:(id)stocks comprehensive:(BOOL)comprehensive;
@end

#endif /* StockUpdaterDelegate_Protocol_h */