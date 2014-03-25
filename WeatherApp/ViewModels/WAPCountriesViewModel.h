//
//  WAPCitiesViewModel.h
//  WeatherApp
//
//  Created by Renzo Crisostomo on 10/03/14.
//  Copyright (c) 2014 Renzo Crisóstomo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WAPCountriesViewModel : RVMViewModel

@property (nonatomic, strong, readonly) NSArray *model;
@property (nonatomic, strong, readonly) RACCommand *loadCountriesCommand;

@end
