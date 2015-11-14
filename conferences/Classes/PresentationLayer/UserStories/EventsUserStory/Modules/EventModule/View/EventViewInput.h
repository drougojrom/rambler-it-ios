//
//  EventViewInput.h
//  Conferences
//
//  Created by Karpushin Artem on 01/11/15.
//  Copyright 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PlainEvent;

@protocol EventViewInput <NSObject>

- (void)configureViewWithEvent:(PlainEvent *)event;

@end

