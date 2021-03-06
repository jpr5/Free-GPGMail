//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class NSString;

@protocol DynamicErrorWindowDelegate <NSObject>
@property(readonly, nonatomic) BOOL displayIndeterminateProgress;
- (long long)helpTopicForDiagnosis:(long long)arg1;
- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (NSString *)rightButtonTextForErrorDiagnosis:(long long)arg1;
- (NSString *)leftButtonTextForErrorDiagnosis:(long long)arg1;
- (NSString *)errorDescriptionForErrorDiagnosis:(long long)arg1;
- (NSString *)errorMessageForErrorDiagnosis:(long long)arg1;
@end

