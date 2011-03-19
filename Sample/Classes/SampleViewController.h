//
//  SampleViewController.h
//  Sample
//
//  Created by Jonah Grant on 3/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JGWebView.h"

@interface SampleViewController : UIViewController {
	JGWebView *webView;
}
@property (nonatomic, retain) JGWebView *webView;

@end

