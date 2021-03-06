//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LoadRemoteContentBannerViewController.h"

@class NSButton, NSMutableArray, NSTextField;

@interface PassbookBannerViewController : LoadRemoteContentBannerViewController
{
    NSTextField *_messageField;	// 104 = 0x68
    NSButton *_viewPassButton;	// 112 = 0x70
    NSMutableArray *_passes;	// 120 = 0x78
}

@property(retain, nonatomic) NSMutableArray *passes; // @synthesize passes=_passes;
@property(nonatomic) __weak NSButton *viewPassButton; // @synthesize viewPassButton=_viewPassButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;	// IMP=0x000000010026a775
- (void)showPasses:(id)arg1;	// IMP=0x000000010026a607
- (void)updateBannerContents;	// IMP=0x000000010026a353
- (void)updateWantsDisplay;	// IMP=0x0000000100041d01
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100041b47
- (void)setRepresentedObject:(id)arg1;	// IMP=0x0000000100049fd7
- (void)setWantsDisplay:(BOOL)arg1;	// IMP=0x000000010004232b
- (void)setContainer:(id)arg1;	// IMP=0x00000001000b5cae
- (BOOL)shouldDisplayToLoadRemoteContent;	// IMP=0x000000010026a312
- (void)dealloc;	// IMP=0x00000001000b5d7a
- (void)_passbookBannerViewControllerCommonInit;	// IMP=0x000000010026a2fe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010026a2b9
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010026a247

@end

