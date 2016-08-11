// Copyright (c) 2015 RAMBLER&Co
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "ReportsSearchInteractorInput.h"
#import "ReportsSearchInteractorOutput.h"

@protocol ReportSearchInteractorOutput;
@protocol EventService;
@protocol LectureService;
@protocol SpeakerService;
@protocol ROSPonsomizer;

@class EventTypeDeterminator;

@interface ReportsSearchInteractor : NSObject <ReportsSearchInteractorInput>

@property (weak, nonatomic) id <ReportsSearchInteractorOutput> output;
@property (strong, nonatomic) id <EventService> eventService;
@property (strong, nonatomic) id <SpeakerService> speakerService;
@property (strong, nonatomic) id <LectureService> lectureService;
@property (strong, nonatomic) id <ROSPonsomizer> ponsomizer;
@property (strong, nonatomic) EventTypeDeterminator *eventTypeDeterminator;

@end