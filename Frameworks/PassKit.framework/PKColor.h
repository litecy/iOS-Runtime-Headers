/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKColor : NSObject <NSSecureCoding, NSCopying> {
    float _red;
    float _green;
    float _blue;
    float _alpha;
    struct CGColor { } *_colorRef;
}

+ (id)colorWithH:(float)arg1 S:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (id)colorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (id)colorFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGColor { }*)CGColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGColor { }*)_newCGColor;
- (BOOL)isVeryLight;
- (id)colorByReplacingWhiteByOffWhite;

@end