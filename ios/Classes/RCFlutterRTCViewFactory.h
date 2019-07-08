//
//  RCFlutterRTCViewFactory.h
//  rongcloud_rtc_plugin
//
//  Created by Sin on 2019/7/5.
//

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCFlutterRTCViewFactory : NSObject<FlutterPlatformViewFactory>

+ (instancetype)sharedInstance;

- (void)initWithMessenger:(NSObject<FlutterBinaryMessenger>*)messager;


- (UIView *)getRenderVideoView:(NSString *)userId;

@end

NS_ASSUME_NONNULL_END