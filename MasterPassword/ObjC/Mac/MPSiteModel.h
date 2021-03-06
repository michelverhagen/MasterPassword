/**
 * Copyright Maarten Billemont (http://www.lhunath.com, lhunath@lyndir.com)
 *
 * See the enclosed file LICENSE for license information (LGPLv3). If you did
 * not receive this file, see http://www.gnu.org/licenses/lgpl-3.0.txt
 *
 * @author   Maarten Billemont <lhunath@lyndir.com>
 * @license  http://www.gnu.org/licenses/lgpl-3.0.txt
 */

//
//  MPSiteModel.h
//  MPSiteModel
//
//  Created by lhunath on 2/11/2014.
//  Copyright, lhunath (Maarten Billemont) 2014. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPSiteEntity.h"
@class MPSiteEntity;

@interface MPSiteModel : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSAttributedString *displayedName;
@property (nonatomic) MPSiteType type;
@property (nonatomic) NSString *typeName;
@property (nonatomic) NSString *content;
@property (nonatomic) NSString *displayedContent;
@property (nonatomic) NSString *loginName;
@property (nonatomic) NSNumber *uses;
@property (nonatomic) NSUInteger counter;
@property (nonatomic) NSDate *lastUsed;
@property (nonatomic) id<MPAlgorithm> algorithm;
@property (nonatomic) BOOL generated;
@property (nonatomic) BOOL stored;

- (instancetype)initWithEntity:(MPSiteEntity *)entity fuzzyGroups:(NSArray *)fuzzyGroups;
- (MPSiteEntity *)entityInContext:(NSManagedObjectContext *)moc;

- (void)updateContent;
@end
