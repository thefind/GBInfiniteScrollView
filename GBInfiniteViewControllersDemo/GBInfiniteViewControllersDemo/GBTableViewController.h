//
//  GBSecondViewController.h
//  GBInfiniteViewControllersDemo
//
//  Created by Gerardo Blanco García on 29/05/14.
//  Copyright (c) 2014 gblancogarcia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GBTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) NSUInteger index;

@end
