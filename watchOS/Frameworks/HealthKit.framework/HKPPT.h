//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKPPTController-Protocol.h>

@class NSMutableDictionary;
@protocol HKPPTInterface, OS_dispatch_queue;

@interface HKPPT : NSObject <HKPPTController>
{
    id <HKPPTInterface> _pptInterface;
    NSObject<OS_dispatch_queue> *_pptQueue;
    NSMutableDictionary *_activeTestsByName;
}

- (void).cxx_destruct;
- (void)_failedTest:(id)arg1 withResults:(id)arg2;
- (void)_failedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)_finishedTest:(id)arg1;
- (void)_startedTest:(id)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)failedTest:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)startedTest:(id)arg1;
- (void)invalidConfigurationForTest:(id)arg1 error:(id)arg2;
- (id)_testNameForDriver:(id)arg1;
- (id)builtinTests;
- (void)dealloc;
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;
- (id)init;

@end

