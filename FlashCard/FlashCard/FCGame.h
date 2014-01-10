//
//  FCGame.h
//  FlashCard
//
//  Created by Near on 1/10/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FCCard.h"
#import "FCAnswerCard.h"

@interface FCGame : NSObject
@property(nonatomic,strong) NSMutableArray* cards;
@property(nonatomic)int currentCard;
//@property

-(id)initWithCards:(NSMutableArray*)c;// 错误的写成(NSMutableArray)*c
-(bool)hasMoreCars;
-(FCCard*)getNextCard;
-(int)getWrongNum;
-(int)getRightNum;

@end
