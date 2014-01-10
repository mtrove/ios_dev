//
//  FCGame.m
//  FlashCard
//
//  Created by Near on 1/10/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import "FCGame.h"

@implementation FCGame


-(id)initWithCards:(NSMutableArray*)c{
    if(self=[super init]){
        self.cards=c;
        self.currentCard=0;
    }
    return self;
}
-(bool)hasMoreCars{
    return [self currentCard]<[self.cards count];
}
-(FCCard*)getNextCard{
    FCCard* card=[self.cards objectAtIndex:self.currentCard];
    self.currentCard++;
    return card;
    
}

-(int)getRightNum{
    
    int numRight = 0;
    for (int i = 0; i < [self.cards count]; ++i) {
        FCCard* c = [self.cards objectAtIndex:i];
        if (c.isCorrect) {
            numRight++;
        }
    }
    return numRight;
    
   // Excerpt From: Lou Franco, Eitan Mendelowitz. “Hello iOS Development v14.” iBooks.
    
}
-(int)getWrongNum{
    
    return [self.cards count]-[self getRightNum];
    
}
@end
