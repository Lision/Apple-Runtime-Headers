//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSTypesetter : NSObject
{
    void *_reserved;
}

+ (unsigned long long)defaultLineBreakStrategy;
+ (_Bool)allowsDefaultLineBreakStrategy;
+ (id)sharedSystemTypesetter;
+ (id)sharedSystemTypesetterForBehavior:(long long)arg1;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (long long)defaultTypesetterBehavior;
+ (_Bool)_usesATSTypesetter;
+ (void)initialize;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setDrawsOutsideLineFragment:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setNotShownAttribute:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(_Bool *)arg5 bidiLevels:(char *)arg6;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long *)arg5 nextCharacterIndex:(unsigned long long *)arg6;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (id)attributesForExtraLineFragment;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange)arg3 atProposedOrigin:(struct CGPoint)arg4;
- (void)setHardInvalidation:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (id)currentParagraphStyle;
- (id)currentTextContainer;
- (id)textContainers;
- (id)layoutManager;
- (_Bool)finalizeLineFragmentRect:(inout struct CGRect *)arg1 lineFragmentUsedRect:(inout struct CGRect *)arg2 baselineOffset:(inout double *)arg3 forGlyphRange:(struct _NSRange)arg4;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)endParagraph;
- (void)beginParagraph;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;
- (struct _NSRange)paragraphSeparatorCharacterRange;
- (struct _NSRange)paragraphCharacterRange;
- (struct _NSRange)paragraphSeparatorGlyphRange;
- (struct _NSRange)paragraphGlyphRange;
- (void)setParagraphGlyphRange:(struct _NSRange)arg1 separatorGlyphRange:(struct _NSRange)arg2;
- (id)attributedString;
- (void)setAttributedString:(id)arg1;
- (void)setTightenThresholdForTruncation:(float)arg1;
- (float)tightenThresholdForTruncation;
- (void)setBidiProcessingEnabled:(_Bool)arg1;
- (_Bool)bidiProcessingEnabled;
- (id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3;
- (id)substituteFontForFont:(id)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (double)lineFragmentPadding;
- (void)setHyphenationFactor:(float)arg1;
- (float)hyphenationFactor;
- (void)setTypesetterBehavior:(long long)arg1;
- (long long)typesetterBehavior;
- (void)setUsesFontLeading:(_Bool)arg1;
- (_Bool)usesFontLeading;
- (long long)_baseWritingDirection;
- (id)_ellipsisFontForFont:(id)arg1;
- (_Bool)_allowsEllipsisGlyphSubstitution;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (long long)applicationFrameworkContext;
- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;
- (void)_updateParagraphStyleCache:(id)arg1;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (void)_setLineBreakModeOverridden:(_Bool)arg1;
- (_Bool)_isLineBreakModeOverridden;
- (void)_setForceOriginalFontBaseline:(_Bool)arg1;
- (_Bool)_forceOriginalFontBaseline;
- (void)finalize;
- (void)dealloc;
- (CDStruct_3fda14a5 *)_getAuxData;
- (CDStruct_3fda14a5 *)_allocateAuxData;

@end

