//
//  UIColor+Utility.m
//  Albumatic
//
//  Created by Benjamin Maer on 8/25/12.
//  Copyright (c) 2012 Resplendent G.P.. All rights reserved.
//

#import "UIColor+Utility.h"

@implementation UIColor (Utility)

+(UIColor*)colorWithFloat:(CGFloat)colorFloat alpha:(CGFloat)alpha
{
    return [UIColor colorWithWhite:colorFloat/255.0f alpha:alpha];
//    return [UIColor colorWithRed:colorFloat/255.0f green:colorFloat/255.0f blue:colorFloat/255.0f alpha:alpha];
}

@end
