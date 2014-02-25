//
//  XYZToDoItem.h
//  TodoList
//
//  Created by Ilan Hagege on 25/02/2014.
//  Copyright (c) 2014 Ilan Hagege. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSDate *creationDate;

@end
