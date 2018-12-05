//
//  AppDelegate.h
//  TestLogin_with_Git
//
//  Created by scit macmini 1 on 12/5/18.
//  Copyright © 2018 scit macmini 1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

