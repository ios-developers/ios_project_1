//
//  s_gameAppDelegate.h
//  s_game
//
//  Created by developer on 4/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class s_gameViewController;

@interface s_gameAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    s_gameViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet s_gameViewController *viewController;

@end

