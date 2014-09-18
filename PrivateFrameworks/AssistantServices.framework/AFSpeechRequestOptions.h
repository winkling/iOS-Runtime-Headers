/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSNumber, NSString;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {
    long long _activationEvent;
    double _activationEventTime;
    long long _audioFileType;
    NSString *_btDeviceAddress;
    double _expectedActivationEventTime;
    NSNumber *_homeButtonUpFromBeep;
    NSString *_serverCommandId;
    bool_acousticIdEnabled;
    bool_isEyesFree;
    bool_isInitialBringUp;
    bool_useAutomaticEndpointing;
    bool_useStreamingDictation;
}

@property bool acousticIdEnabled;
@property long long activationEvent;
@property double activationEventTime;
@property long long audioFileType;
@property(copy) NSString * btDeviceAddress;
@property double expectedActivationEventTime;
@property(copy) NSNumber * homeButtonUpFromBeep;
@property bool isEyesFree;
@property bool isInitialBringUp;
@property(copy) NSString * serverCommandId;
@property bool useAutomaticEndpointing;
@property bool useStreamingDictation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acousticIdEnabled;
- (long long)activationEvent;
- (double)activationEventTime;
- (long long)audioFileType;
- (id)btDeviceAddress;
- (void)encodeWithCoder:(id)arg1;
- (double)expectedActivationEventTime;
- (id)homeButtonUpFromBeep;
- (id)initWithActivationEvent:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEyesFree;
- (bool)isInitialBringUp;
- (id)serverCommandId;
- (void)setAcousticIdEnabled:(bool)arg1;
- (void)setActivationEvent:(long long)arg1;
- (void)setActivationEventTime:(double)arg1;
- (void)setAudioFileType:(long long)arg1;
- (void)setBtDeviceAddress:(id)arg1;
- (void)setExpectedActivationEventTime:(double)arg1;
- (void)setHomeButtonUpFromBeep:(id)arg1;
- (void)setIsEyesFree:(bool)arg1;
- (void)setIsInitialBringUp:(bool)arg1;
- (void)setServerCommandId:(id)arg1;
- (void)setUseAutomaticEndpointing:(bool)arg1;
- (void)setUseStreamingDictation:(bool)arg1;
- (bool)useAutomaticEndpointing;
- (bool)useStreamingDictation;

@end