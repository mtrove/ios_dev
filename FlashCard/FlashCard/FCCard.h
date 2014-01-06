//
//  FCCard.h
//  FlashCard
//
//  Created by Near on 1/6/14.
//  Copyright (c) 2014 Near. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FCCard : NSObject

@property(nonatomic) bool isCorrect;
@property(nonatomic) int correctAnswer;

@property(nonatomic,strong) NSMutableArray* answers;
@property(nonatomic,strong) NSString *cardText;

-(id) initWithQuestion:(NSString*)question
                 answer:(NSString*)answer
           wrongAnswer1:(NSString*)wrongAnswer1
           wrongAnswer2:(NSString*)wrongAnswer2;

-(void) recordAnswer:(int)answerNum;

//Excerpt From: Lou Franco, Eitan Mendelowitz. “Hello iOS Development v14.” iBooks.

@end
