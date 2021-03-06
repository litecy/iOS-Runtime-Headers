/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSButtonDefinition : NSObject <NSSecureCoding> {
    BOOL  _representsHomeButton;
    BSMutableSettings * _settings;
}

@property (getter=_BSSettings, nonatomic, readonly, retain) BSSettings *BSSettings;
@property (getter=isLongPressEnabled, nonatomic, readonly) int longPressEnabled;
@property (nonatomic) double maximumLongPressTimeInterval;
@property (nonatomic) double maximumMultiplePressTimeInterval;
@property (nonatomic) int maximumPressCount;
@property (nonatomic) int maximumTapCount;
@property (nonatomic) double minimumLongPressTimeInterval;
@property (nonatomic) double minimumMultiplePressTimeInterval;
@property (nonatomic) BOOL representsHomeButton;
@property (nonatomic) int screenshotType;
@property (nonatomic) int stackshotType;

+ (id)definitionForHomeButton;
+ (BOOL)supportsSecureCoding;

- (id)_BSSettings;
- (id)_initWithBSSettings:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)isLongPressEnabled;
- (double)maximumLongPressTimeInterval;
- (double)maximumMultiplePressTimeInterval;
- (int)maximumPressCount;
- (int)maximumTapCount;
- (double)minimumLongPressTimeInterval;
- (double)minimumMultiplePressTimeInterval;
- (BOOL)representsHomeButton;
- (int)screenshotType;
- (void)setMaximumLongPressTimeInterval:(double)arg1;
- (void)setMaximumMultiplePressTimeInterval:(double)arg1;
- (void)setMaximumPressCount:(int)arg1;
- (void)setMaximumTapCount:(int)arg1;
- (void)setMinimumLongPressTimeInterval:(double)arg1;
- (void)setMinimumMultiplePressTimeInterval:(double)arg1;
- (void)setRepresentsHomeButton:(BOOL)arg1;
- (void)setScreenshotType:(int)arg1;
- (void)setStackshotType:(int)arg1;
- (int)stackshotType;
- (void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(id /* block */)arg2;

@end
