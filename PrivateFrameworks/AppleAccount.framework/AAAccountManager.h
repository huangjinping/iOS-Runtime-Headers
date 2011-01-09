/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSMutableArray;



@interface AAAccountManager : NSObject 
{
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
}

@property(readonly) NSArray *accounts;

+ (id)sharedManager;

- (void)reloadAccounts;
- (id)accounts;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)saveAllAccounts;
- (void)updateAccount:(id)arg1;
- (id)accountsEnabledForDataclass:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (void)dealloc;

@end