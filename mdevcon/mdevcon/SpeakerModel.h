//
//  SpeakerModel.h
//  mdevcon
//
//  Created by Ivo Jansch on 9/7/11.
//  Copyright 2011 Egeniq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SpeakerModel : NSObject

- (void)confirmSpeakers:(NSArray *)speakers;

- (void)runCallForPapersOnComplete:(void(^)(NSArray *speakers))completeBlock;

@end
