#import <Foundation/Foundation.h>
#import <TEduBoard/TEduBoard.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTViewManager.h>
#import <React/RCTEventEmitter.h>

@interface RCTTICBridgeManager : RCTEventEmitter <RCTBridgeModule>
-(void) viewReady;
@end

