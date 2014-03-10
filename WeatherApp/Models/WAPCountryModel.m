//
//  WAPCountry.m
//  WeatherApp
//
//  Created by Renzo Crisostomo on 10/03/14.
//  Copyright (c) 2014 Renzo Crisóstomo. All rights reserved.
//

#import "WAPCountryModel.h"

@implementation WAPCountryModel

+ (NSDictionary *)JSONKeyPathsByPropertyKey
{
    return @{
             @"countryName" : @"countryName",
             @"countryCode" : @"countryCode"
             };
}

@end
