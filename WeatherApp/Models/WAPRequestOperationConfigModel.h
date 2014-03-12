//
//  WAPRequestOperationConfigModel.h
//  WeatherApp
//
//  Created by Renzo Crisostomo on 12/03/14.
//  Copyright (c) 2014 Renzo Crisóstomo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WAPRequestOperationConfigModel : NSObject

@property (nonatomic, copy, readwrite) NSURL *URL;
@property (nonatomic, copy, readwrite) AFHTTPResponseSerializer *responseSerializer;

@end
