//
//  MediaGroup.m
//  YTBrowser
//
//  Created by Marin Todorov on 03/01/2013.
//  Copyright (c) 2013 Underplot ltd. All rights reserved.
//

#import "MediaGroup.h"

@implementation MediaGroup

+(JSONKeyMapper*)keyMapper
{
    return [[JSONKeyMapper alloc] initWithDictionary:
            @{@"media$thumbnail":@"thumbnail"}
            ];
}

@end
