//
//  AppDelegate.h
//  TWAccountList
//
//  Created by Tatsuya Arai on 12/02/16.
//  Copyright (c) 2012 genesix, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AccountsListViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) AccountsListViewController *viewController;

@end
