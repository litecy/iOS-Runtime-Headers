/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {
    MSPTransitStorageLine * _line;
    GEOMapRegion * _storedMapRegion;
    MSPTransitStorageAttribution * _transitAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, readonly) <GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int departureTimeDisplayStyle;
@property (nonatomic, readonly) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) BOOL hasEncyclopedicInfo;
@property (nonatomic, readonly) BOOL hasIncidentComponent;
@property (nonatomic, readonly) BOOL hasLine;
@property (nonatomic, readonly) BOOL hasLineColorString;
@property (nonatomic, readonly) BOOL hasStoredMapRegion;
@property (nonatomic, readonly) BOOL hasTransitAttribution;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) BOOL isIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, retain) MSPTransitStorageLine *line;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) BOOL showVehicleNumber;
@property (nonatomic, retain) GEOMapRegion *storedMapRegion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;
@property (nonatomic, retain) MSPTransitStorageAttribution *transitAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)artwork;
- (id)attribution;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)departureTimeDisplayStyle;
- (BOOL)departuresAreVehicleSpecific;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encyclopedicInfo;
- (BOOL)hasEncyclopedicInfo;
- (BOOL)hasIncidentComponent;
- (BOOL)hasLine;
- (BOOL)hasLineColorString;
- (BOOL)hasStoredMapRegion;
- (BOOL)hasTransitAttribution;
- (unsigned int)hash;
- (id)incidents;
- (id)initWithLineItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIncidentsTTLExpired;
- (id)labelItems;
- (id)line;
- (id)lineColorString;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (BOOL)readFrom:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setStoredMapRegion:(id)arg1;
- (void)setTransitAttribution:(id)arg1;
- (BOOL)showVehicleNumber;
- (id)storedMapRegion;
- (id)system;
- (id)transitAttribution;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end