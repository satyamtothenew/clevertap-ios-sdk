#import <Foundation/Foundation.h>

@interface CleverTapInstanceConfig () <NSCopying> {}

@property (nonatomic, assign, readonly) BOOL isDefaultInstance;
@property (nonatomic, strong, readonly, nonnull) NSString *queueLabel;
@property (nonatomic, assign) BOOL isCreatedPostAppLaunched;
@property (nonatomic, assign) BOOL beta;

- (instancetype _Nonnull)initWithAccountId:(NSString * _Nonnull)accountId
                              accountToken:(NSString * _Nonnull)accountToken
                             accountRegion:(NSString * _Nullable)accountRegion
                         isDefaultInstance:(BOOL)isDefault;

- (instancetype _Nonnull)initWithAccountId:(NSString * _Nonnull)accountId
                              accountToken:(NSString * _Nonnull)accountToken
                               proxyDomain:(NSString * _Nullable)domain
                         isDefaultInstance:(BOOL)isDefault;

@end
