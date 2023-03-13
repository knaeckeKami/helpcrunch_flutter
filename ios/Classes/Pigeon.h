// Autogenerated from Pigeon (v9.0.6), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class HelpCrunchInitializationParams;
@class HelpCrunchUser;

/// code used to generate the pigeon api
/// see README for details
@interface HelpCrunchInitializationParams : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithHelpCrunchAppId:(NSNumber *)helpCrunchAppId
    organizationName:(NSString *)organizationName
    appSecret:(NSString *)appSecret
    iOSShouldUsePushNotificationDelegate:(NSNumber *)iOSShouldUsePushNotificationDelegate;
@property(nonatomic, strong) NSNumber * helpCrunchAppId;
@property(nonatomic, copy) NSString * organizationName;
@property(nonatomic, copy) NSString * appSecret;
@property(nonatomic, strong) NSNumber * iOSShouldUsePushNotificationDelegate;
@end

@interface HelpCrunchUser : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithId:(NSString *)id
    name:(nullable NSString *)name
    email:(nullable NSString *)email
    company:(nullable NSString *)company
    phone:(nullable NSString *)phone
    customData:(nullable NSDictionary<NSString *, id> *)customData;
@property(nonatomic, copy) NSString * id;
@property(nonatomic, copy, nullable) NSString * name;
@property(nonatomic, copy, nullable) NSString * email;
@property(nonatomic, copy, nullable) NSString * company;
@property(nonatomic, copy, nullable) NSString * phone;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> * customData;
@end

/// The codec used by HelpCrunchPlugin.
NSObject<FlutterMessageCodec> *HelpCrunchPluginGetCodec(void);

@protocol HelpCrunchPlugin
/// Initializes the HelpCrunch plugin.
/// This method must be called before any other method.
- (void)initializeParams:(HelpCrunchInitializationParams *)params completion:(void (^)(FlutterError *_Nullable))completion;
/// show the native chat screen
- (void)showChatScreenWithCompletion:(void (^)(FlutterError *_Nullable))completion;
- (void)updateUserUser:(HelpCrunchUser *)user completion:(void (^)(FlutterError *_Nullable))completion;
- (void)logoutUserWithCompletion:(void (^)(FlutterError *_Nullable))completion;
- (void)registerForRemoteMessagesWithCompletion:(void (^)(FlutterError *_Nullable))completion;
- (void)getNumberOfUnreadChatsWithCompletion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)isReadyWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)hasErrorWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void HelpCrunchPluginSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<HelpCrunchPlugin> *_Nullable api);

NS_ASSUME_NONNULL_END
