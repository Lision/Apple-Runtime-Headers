//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary
{
    NSDateComponents *_collationDateComponents;
    int _timeScope;
    double _collatedSummaryCount;
}

- (void).cxx_destruct;
@property(nonatomic) double collatedSummaryCount; // @synthesize collatedSummaryCount=_collatedSummaryCount;
@property(nonatomic) int timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSDateComponents *collationDateComponents; // @synthesize collationDateComponents=_collationDateComponents;
- (id)_maxQuantity:(id)arg1 otherQuantity:(id)arg2;
- (id)_divideQuantity:(id)arg1 divisor:(double)arg2;
- (id)_addQuantity:(id)arg1 toQuantity:(id)arg2;
- (void)finishCollatingSummaryWithGraphView:(id)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (void)combineWithActivitySummary:(id)arg1;
- (id)initWithTimeScope:(int)arg1;

@end

