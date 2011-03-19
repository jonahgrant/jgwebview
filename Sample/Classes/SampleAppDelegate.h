//
//  SampleAppDelegate.h
//  Sample
//
//  Created by Jonah Grant on 3/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SampleViewController;

@interface SampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SampleViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SampleViewController *viewController;

@end

