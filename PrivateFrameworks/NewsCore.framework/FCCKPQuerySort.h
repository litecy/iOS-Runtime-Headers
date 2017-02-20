/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPQuerySort : PBCodable <NSCopying> {
    FCCKPRecordFieldIdentifier * _fieldName;
    struct { 
        unsigned int order : 1; 
    }  _has;
    int  _order;
}

@property (nonatomic, retain) FCCKPRecordFieldIdentifier *fieldName;
@property (nonatomic, readonly) BOOL hasFieldName;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) int order;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (BOOL)hasFieldName;
- (BOOL)hasOrder;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)order;
- (BOOL)readFrom:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setHasOrder:(BOOL)arg1;
- (void)setOrder:(int)arg1;
- (void)writeTo:(id)arg1;

@end