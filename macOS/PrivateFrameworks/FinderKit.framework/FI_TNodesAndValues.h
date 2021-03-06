//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FI_TNodesAndValues : NSObject <NSCopying>
{
    struct unordered_map<TFENode, TNSRef<NSObject, void>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<NSObject, void>>>> _values;
    shared_ptr_f8db59dd _allNodes;
    struct TString _attribute;
    _Bool _forPreview;
    struct TNSRef<FI_TNodesAndValues, void> _masterValues;
    _Bool _isMasterAttribute;
    _Bool _hasNumericValues;
    _Bool _hasDateValues;
    _Bool _canBeRanged;
    _Bool _canBeTotaled;
    _Bool _canBeAveraged;
    _Bool _dirty;
    struct TNSRef<NSObject, void> _lowest;
    struct TNSRef<NSObject, void> _highest;
    double _total;
    struct unordered_map<TNSRef<NSObject, void>, unsigned long, std::__1::hash<TNSRef<NSObject, void>>, std::__1::equal_to<TNSRef<NSObject, void>>, std::__1::allocator<std::__1::pair<const TNSRef<NSObject, void>, unsigned long>>> _uniqueValueCounts;
    struct vector<std::__1::pair<TNSRef<NSObject, void>, unsigned long>, std::__1::allocator<std::__1::pair<TNSRef<NSObject, void>, unsigned long>>> _valuesSortedByCount;
    struct TString _displayString;
    struct TString _toolTipString;
    struct TNSRef<NSDate, void> _singleDate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)analyze;
- (unsigned long long)count;
- (id)dateInterval;
- (struct TString)rangeString;
- (struct TString)uniqueValuesAndCountsStringUpTo:(long long)arg1 onSeparateLines:(_Bool)arg2 lineLimit:(unsigned long long)arg3;
- (void)computeToolTipStringAsAllUniqueValues;
- (struct TString)totalString;
- (struct TString)averageString;
- (struct TString)dateRangeSummaryString;
- (double)dateSpanSeconds;
- (void)computeDisplayStringAndToolTip;
- (struct TString)toolTipString;
- (struct TString)displayString;
- (id)objectForDisplay;
- (int)digitsAfterDecimalForTotal;
- (int)digitsAfterDecimalForAverage;
- (unsigned long long)countNonNil;
- (void)setValue:(id)arg1 forNode:(const struct TFENode *)arg2;
- (void)setIsMasterAttribute;
- (void)setMasterValues:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttribute:(const struct TString *)arg1 forPreview:(_Bool)arg2;
- (id)initWithAttribute:(const struct TString *)arg1 allNodes:(shared_ptr_f8db59dd)arg2 forPreview:(_Bool)arg3;

@end

