/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {
    UIButton * _reportSpamButton;
    BOOL  _wasReportedAsSpam;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;
@property (nonatomic, retain) UIButton *reportSpamButton;
@property (nonatomic) BOOL wasReportedAsSpam;

+ (id)reportSpamButton;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedButtonText;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)reportSpamButton;
- (void)setAttributedButtonText:(id)arg1;
- (void)setReportSpamButton:(id)arg1;
- (void)setWasReportedAsSpam:(BOOL)arg1;
- (BOOL)wasReportedAsSpam;

@end
