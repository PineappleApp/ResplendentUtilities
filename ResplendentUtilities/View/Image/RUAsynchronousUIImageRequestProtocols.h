//
//  RUAsynchronousUIImageRequestProtocols.h
//  Albumatic
//
//  Created by Benjamin Maer on 6/19/13.
//  Copyright (c) 2013 Albumatic Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RUAsynchronousUIImageRequest;

@protocol RUAsynchronousUIImageRequestDelegate <NSObject>

-(void)asynchronousUIImageRequest:(RUAsynchronousUIImageRequest*)asynchronousUIImageRequest didFinishLoadingWithImage:(UIImage*)image;
-(void)asynchronousUIImageRequest:(RUAsynchronousUIImageRequest*)asynchronousUIImageRequest didFailLoadingWithError:(NSError*)error;

@end
