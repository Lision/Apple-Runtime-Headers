//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLDuetBudgetControllerConfiguration-Protocol.h>

@class NSArray, NSString;

@interface CSLDuetSnapshotBudgetControllerConfiguration : NSObject <CSLDuetBudgetControllerConfiguration>
{
}

+ (id)defaultConfiguration;
+ (void)initialize;
- (int)_budgetPeriodComplicationsCreditsDefault;
- (int)_budgetPeriodDockAppsCreditsDefault;
@property(readonly, nonatomic) NSString *budgetControllerName;
@property(readonly, nonatomic) NSString *budgetContextKeyPath;
@property(readonly, nonatomic) NSArray *budgets;
- (id)privilegedClients;
@property(readonly, nonatomic) double budgetPeriodDefault;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

