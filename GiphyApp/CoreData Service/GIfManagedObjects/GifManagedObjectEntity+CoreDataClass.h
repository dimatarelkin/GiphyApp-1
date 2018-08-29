//
//  GifManagedObjectEntity+CoreDataClass.h
//  GiphyApp
//
//  Created by Dmitriy Tarelkin on 29/8/18.
//  Copyright © 2018 Aliaksei Piatyha. All rights reserved.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


NS_ASSUME_NONNULL_BEGIN

static NSString *const gifEntityName = @"GifManagedObjectEntity";
@class GifManagedObjectImage,GifEntity;

@interface GifManagedObjectEntity : NSManagedObject
- (GifManagedObjectEntity*)initWithItem:(GifEntity *)item context:(NSManagedObjectContext *)context;
@end

NS_ASSUME_NONNULL_END

#import "GifManagedObjectEntity+CoreDataProperties.h"
