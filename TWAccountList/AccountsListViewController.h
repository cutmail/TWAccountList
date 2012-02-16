//
//  ViewController.h
//  TWAccountList
//
//  Created by Tatsuya Arai on 12/02/16.
//  Copyright (c) 2012 genesix, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>

@interface AccountsListViewController : UITableViewController
{
    ACAccountStore *_accountStore;
    NSArray *_accounts;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSArray *accounts;    

@end
