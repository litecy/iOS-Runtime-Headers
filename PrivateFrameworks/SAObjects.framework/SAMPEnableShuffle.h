/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAMPEnableShuffle : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property BOOL enable;

+ (id)enableShuffleWithDictionary:(id)arg1 context:(id)arg2;
+ (id)enableShuffle;

- (id)groupIdentifier;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end