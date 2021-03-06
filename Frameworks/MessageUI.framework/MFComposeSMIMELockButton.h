/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeSMIMELockButton : UIButton {
    BOOL  _canEncrypt;
    UIImageView * _lockedImageView;
    UIImageView * _unlockedImageView;
    BOOL  _wantsEncryption;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  touchInsets;
}

@property (nonatomic) BOOL canEncrypt;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } touchInsets;
@property (nonatomic) BOOL wantsEncryption;

- (void)_closeLock;
- (void)_openLock;
- (void)_updateButtonAppearance;
- (void)_updateButtonAppearanceAnimated:(BOOL)arg1;
- (BOOL)canEncrypt;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCanEncrypt:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTouchInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setWantsEncryption:(BOOL)arg1;
- (void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })touchInsets;
- (BOOL)wantsEncryption;

@end
