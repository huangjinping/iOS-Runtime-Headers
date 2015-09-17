/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation {
    NSDate *_completionDate;
    NSData *_data;
    NSString *_exchangeID;
    NSDictionary *_localizableMessage;
    NSArray *_recipientIndexes;
    NSArray *_replies;
    NSDate *_sendDate;
    unsigned char _senderIndex;
    NSString *_statusString;
    NSDate *_timeoutDate;
}

@property (nonatomic, retain) NSDate *completionDate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *exchangeID;
@property (nonatomic, retain) NSDictionary *localizableMessage;
@property (nonatomic, retain) NSArray *recipientIndexes;
@property (nonatomic, retain) NSArray *replies;
@property (nonatomic, retain) NSDate *sendDate;
@property (nonatomic) unsigned char senderIndex;
@property (nonatomic, retain) NSString *statusString;
@property (nonatomic, retain) NSDate *timeoutDate;

+ (id)secureCodedPropertyKeys;

- (id)completionDate;
- (id)data;
- (void)dealloc;
- (id)exchangeID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizableMessage;
- (id)recipientIndexes;
- (id)replies;
- (id)sendDate;
- (unsigned char)senderIndex;
- (void)setCompletionDate:(id)arg1;
- (void)setData:(id)arg1;
- (void)setExchangeID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setRecipientIndexes:(id)arg1;
- (void)setReplies:(id)arg1;
- (void)setSendDate:(id)arg1;
- (void)setSenderIndex:(unsigned char)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTimeoutDate:(id)arg1;
- (id)statusString;
- (id)timeoutDate;

@end