//
//  JGWebView.m
//  Gowalla
//
//  Created by Jonah Grant on 3/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "JGWebView.h"


@implementation JGWebView
@synthesize backgroundColor;

-(id)initWithCoder:(NSCoder*) coder
{
    if(self = [super initWithCoder:coder])
        self.backgroundColor = [UIColor whiteColor];
	
	return self;
}  

-(void)layoutSubviews
{	
	[[[self subviews] lastObject] setBackgroundColor:backgroundColor]; 
	
	for(UIView *eachSubview in [[[self subviews] objectAtIndex:0] subviews])
        if ([eachSubview isKindOfClass:[UIImageView class]] && eachSubview.frame.size.width >= 320.0) 
			eachSubview.hidden = YES;
}

@end

