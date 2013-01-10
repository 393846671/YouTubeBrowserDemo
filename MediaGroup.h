//
//  MediaGroup.h
//  YTBrowser
//
//  Created by Marin Todorov on 03/01/2013.
//  Copyright (c) 2013 Underplot ltd. All rights reserved.
//

#import "JSONModel.h"
#import "MediaThumbnail.h"

@interface MediaGroup : JSONModel

@property (strong, nonatomic) NSArray<MediaThumbnail>* media$thumbnail;

@end
