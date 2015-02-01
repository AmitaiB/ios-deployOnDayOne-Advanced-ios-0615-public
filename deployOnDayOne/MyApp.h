//
//  MyApp.h
//  deployOnDayOne
//
//  Created by Zachary Drossman on 1/28/15.
//  Copyright (c) 2015 Zachary Drossman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyApp : NSObject

@property (strong, nonatomic, readonly) NSString *currentUser;
@property (strong, nonatomic) NSMutableArray *questionsList;
@property (strong, nonatomic) NSMutableDictionary *interviews;

-(void)execute;

@end
