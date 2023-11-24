//
//  RNNobleToWarrior.h
//  RNNobleServiceToWarrior
//
//  Created by Nicka on 11/24/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNNobleToWarrior : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)nobleWarrior_shared;
- (UIViewController *)nobleWarrior_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
