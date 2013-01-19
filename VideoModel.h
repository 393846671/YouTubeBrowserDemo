//
//  VideoModel.h
//  JSONModelDemo
//
//  Created by Marin Todorov on 02/12/2012.
//  Copyright (c) 2012 Underplot ltd. All rights reserved.
//

#import "JSONModel.h"

#import "VideoLink.h"
#import "VideoTitle.h"
#import "MediaGroup.h"

@interface VideoModel : JSONModel

@property (strong, nonatomic) VideoTitle* title;
@property (strong, nonatomic) NSArray<VideoLink>* link;
@property (strong, nonatomic) MediaGroup* group;

@end
