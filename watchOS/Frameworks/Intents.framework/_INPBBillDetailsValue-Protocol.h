//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@protocol _INPBBillDetailsValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasPaymentDate;
@property(retain, nonatomic) _INPBDateTime *paymentDate;
@property(readonly, nonatomic) _Bool hasMinimumDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *minimumDue;
@property(readonly, nonatomic) _Bool hasLateFee;
@property(retain, nonatomic) _INPBCurrencyAmountValue *lateFee;
@property(readonly, nonatomic) _Bool hasDueDate;
@property(retain, nonatomic) _INPBDateTime *dueDate;
@property(nonatomic) _Bool hasBillType;
@property(nonatomic) int billType;
@property(readonly, nonatomic) _Bool hasBillPayee;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property(readonly, nonatomic) _Bool hasAmountDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *amountDue;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsBillType:(NSString *)arg1;
- (NSString *)billTypeAsString:(int)arg1;
@end

