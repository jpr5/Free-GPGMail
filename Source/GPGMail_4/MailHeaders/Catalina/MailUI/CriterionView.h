//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ColorBackgroundView.h"

@class CriteriaUIHelper, MFMailbox, MailboxesChooser, NSButton, NSDatePicker, NSMenu, NSNumberFormatter, NSPopUpButton, NSString, NSTextField, NSView;

@interface CriterionView : ColorBackgroundView
{
    long long _criterionType;
    BOOL _isSmartMailboxCriterion;
    NSView *_headerCriteriaView;
    NSView *_simpleCriteriaView;
    NSView *_accountOrGroupView;
    NSView *_mailboxesView;
    NSView *_daysOldDatesView;
    NSView *_simpleDatesView;
    NSView *_daysAgoDatesView;
    NSView *_inThelastDaysDatesView;
    NSView *_daysAgoRangeDatesView;
    NSView *_beforeAfterDatesView;
    NSView *_dateRangeDatesView;
    NSView *_attachmentTypeView;
    NSView *_flaggedStatusView;
    NSNumberFormatter *_daysFormatter;
    NSNumberFormatter *_daysOldFormatter;
    MailboxesChooser *_mailboxesChooser;
    CriteriaUIHelper *_owner;
    NSButton *_removeButton;
    NSButton *_addButton;
    NSView *_currentView;
    NSPopUpButton *_criterionPopUp;
    NSPopUpButton *_qualifierPopUp;
    NSTextField *_expressionStringField;
    NSTextField *_expressionNumberField;
    NSTextField *_expressionOtherNumberField;
    NSDatePicker *_dateFieldPicker;
    NSDatePicker *_otherDateFieldPicker;
    NSPopUpButton *_unitsPopUp;
    NSMenu *_criterionMenu;
    NSMenu *_dateQualifierMenu;
    NSString *_expressionGuess;
    MFMailbox *_mailboxBeingEdited;
    long long _criterionTypeForOtherArea;
}

@property(nonatomic) long long criterionTypeForOtherArea; // @synthesize criterionTypeForOtherArea=_criterionTypeForOtherArea;
@property(retain, nonatomic) MFMailbox *mailboxBeingEdited; // @synthesize mailboxBeingEdited=_mailboxBeingEdited;
@property(copy, nonatomic) NSString *expressionGuess; // @synthesize expressionGuess=_expressionGuess;
@property(nonatomic) BOOL isSmartMailboxCriterion; // @synthesize isSmartMailboxCriterion=_isSmartMailboxCriterion;
@property(retain, nonatomic) NSMenu *dateQualifierMenu; // @synthesize dateQualifierMenu=_dateQualifierMenu;
@property(retain, nonatomic) NSMenu *criterionMenu; // @synthesize criterionMenu=_criterionMenu;
@property(nonatomic) __weak NSPopUpButton *unitsPopUp; // @synthesize unitsPopUp=_unitsPopUp;
@property(nonatomic) __weak NSDatePicker *otherDateFieldPicker; // @synthesize otherDateFieldPicker=_otherDateFieldPicker;
@property(nonatomic) __weak NSDatePicker *dateFieldPicker; // @synthesize dateFieldPicker=_dateFieldPicker;
@property(nonatomic) __weak NSTextField *expressionOtherNumberField; // @synthesize expressionOtherNumberField=_expressionOtherNumberField;
@property(nonatomic) __weak NSTextField *expressionNumberField; // @synthesize expressionNumberField=_expressionNumberField;
@property(nonatomic) __weak NSTextField *expressionStringField; // @synthesize expressionStringField=_expressionStringField;
@property(nonatomic) __weak NSPopUpButton *qualifierPopUp; // @synthesize qualifierPopUp=_qualifierPopUp;
@property(nonatomic) __weak NSPopUpButton *criterionPopUp; // @synthesize criterionPopUp=_criterionPopUp;
@property(nonatomic) __weak NSView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak CriteriaUIHelper *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) MailboxesChooser *mailboxesChooser; // @synthesize mailboxesChooser=_mailboxesChooser;
@property(retain, nonatomic) NSNumberFormatter *daysOldFormatter; // @synthesize daysOldFormatter=_daysOldFormatter;
@property(retain, nonatomic) NSNumberFormatter *daysFormatter; // @synthesize daysFormatter=_daysFormatter;
@property(retain, nonatomic) NSView *flaggedStatusView; // @synthesize flaggedStatusView=_flaggedStatusView;
@property(retain, nonatomic) NSView *attachmentTypeView; // @synthesize attachmentTypeView=_attachmentTypeView;
@property(retain, nonatomic) NSView *dateRangeDatesView; // @synthesize dateRangeDatesView=_dateRangeDatesView;
@property(retain, nonatomic) NSView *beforeAfterDatesView; // @synthesize beforeAfterDatesView=_beforeAfterDatesView;
@property(retain, nonatomic) NSView *daysAgoRangeDatesView; // @synthesize daysAgoRangeDatesView=_daysAgoRangeDatesView;
@property(retain, nonatomic) NSView *inThelastDaysDatesView; // @synthesize inThelastDaysDatesView=_inThelastDaysDatesView;
@property(retain, nonatomic) NSView *daysAgoDatesView; // @synthesize daysAgoDatesView=_daysAgoDatesView;
@property(retain, nonatomic) NSView *simpleDatesView; // @synthesize simpleDatesView=_simpleDatesView;
@property(retain, nonatomic) NSView *daysOldDatesView; // @synthesize daysOldDatesView=_daysOldDatesView;
@property(retain, nonatomic) NSView *mailboxesView; // @synthesize mailboxesView=_mailboxesView;
@property(retain, nonatomic) NSView *accountOrGroupView; // @synthesize accountOrGroupView=_accountOrGroupView;
@property(retain, nonatomic) NSView *simpleCriteriaView; // @synthesize simpleCriteriaView=_simpleCriteriaView;
@property(retain, nonatomic) NSView *headerCriteriaView; // @synthesize headerCriteriaView=_headerCriteriaView;
//- (void).cxx_destruct;
- (void)ownerSearchAreaChanged:(id)arg1;
- (void)mailboxCriterionPopUpChangedSelection:(id)arg1;
- (void)makeRemoveButtonEnabled:(BOOL)arg1;
- (void)criterionPopupChanged:(id)arg1;
- (void)_criterionPopupWillPopup:(id)arg1;
- (void)qualifierPopupChanged:(id)arg1;
- (BOOL)_populateQualifierPopup;
- (void)putHeaderCriteriaInPopUpMenu;
- (id)_timeSince1970StringFromDatePicker:(id)arg1 atEndOfDay:(BOOL)arg2;
- (id)_subcriteriaForRelativeDatesFrom:(long long)arg1 to:(long long)arg2 units:(long long)arg3 criterionType:(long long)arg4;
- (void)_insertBestGuessForExpressionField;
- (void)_configureViewForQualifierTag:(long long)arg1 criterion:(id)arg2;
- (void)_setEnglishStringsForPopUpMenuHeaderItems:(id)arg1;
- (id)criterion;
- (void)configureForCriterion:(id)arg1;
- (id)_menuUsingInfo:(struct menuItemInfo *)arg1 length:(long long)arg2;
- (void)setIsSmartMailboxCriterion:(BOOL)arg1 mailbox:(id)arg2;
- (void)awakeFromNib;
@property(nonatomic) long long criterionType;
- (void)dealloc;

@end

