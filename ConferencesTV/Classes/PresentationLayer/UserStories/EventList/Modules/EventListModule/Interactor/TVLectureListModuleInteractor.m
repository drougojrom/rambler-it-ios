//
//  TVLectureListModuleTVLectureListModuleInteractor.m
//  Conferences
//
//  Created by Porokhov Artem on 21/12/2016.
//  Copyright © 2016 Rambler&Co. All rights reserved.
//

#import "TVLectureListModuleInteractor.h"

#import "TVLectureListModuleInteractorOutput.h"

@implementation TVLectureListModuleInteractor

#pragma mark - Методы TVLectureListModuleInteractorInput

- (void)updateLectureListWithTags:(NSSet <TagPlainObject *> *)tags {
    // TODO: Запрос списка лекций по набору тегов
    
    [self.output didUpdateLectureListWithLectures:nil];
}

@end
