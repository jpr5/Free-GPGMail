//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@interface _MFMailboxEnumerator : NSEnumerator
{
    struct __CFTree *_startTree;	// 8 = 0x8
    struct __CFTree *_lastTree;	// 16 = 0x10
}

- (id)nextObject;	// IMP=0x00000000001b5467
- (void)dealloc;	// IMP=0x00000000001b5425
- (id)init;	// IMP=0x00000000001b5356
- (id)initWithTree:(struct __CFTree *)arg1;	// IMP=0x00000000001b528f

@end
