/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    } _has;
    GEOLatLng *_source;
    double _timestamp;
}

@property(retain) NSString * bundleIdentifier;
@property(retain) GEOLatLng * destination;
@property(readonly) bool hasBundleIdentifier;
@property(readonly) bool hasDestination;
@property(readonly) bool hasSource;
@property bool hasTimestamp;
@property(retain) GEOLatLng * source;
@property double timestamp;

- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDestination;
- (bool)hasSource;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)source;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end