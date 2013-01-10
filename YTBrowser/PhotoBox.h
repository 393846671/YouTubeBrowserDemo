//
//  Created by matt on 28/09/12.
//  Additions by Marin Todorov for YouTube JSONModel tutorial

#import "MGBox.h"

@interface PhotoBox : MGBox

+ (PhotoBox *)photoAddBoxWithSize:(CGSize)size;
+ (PhotoBox *)photoBoxForURL:(NSURL*)url size:(CGSize)size title:(NSString*)title;

- (void)loadPhotoFromURL:(NSURL*)url;

@end
