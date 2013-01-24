//
//  NSDate+Utility.h
//  Memeni
//
//  Created by Benjamin Maer on 9/6/12.
//  Copyright (c) 2012 Resplendent G.P.. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Utility)

-(NSString*)daysOrHoursOrMinutesOrSecondsString;

-(NSTimeInterval)daysOrHoursOrMinutesOrSecondsTypeTimeInterval;

+(NSString*)daysOrHoursOrMinutesOrSecondsStringWithTimeIntervalSince1970:(NSTimeInterval)timeInterval;

@end
