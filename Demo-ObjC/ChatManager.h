//
//  ChatManager.h
//  Twilio Chat Demo
//
//  Copyright (c) 2018 Twilio, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <TwilioChatClient/TwilioChatClient.h>

@interface ChatManager : NSObject

@property (nonatomic, strong, readonly) TwilioChatClient *client;

+ (instancetype)sharedManager;

- (void)presentRootViewController;
- (BOOL)hasIdentity;
- (NSString *)storedIdentity;
- (BOOL)loginWithIdentity:(NSString *)identity completion:(void(^)(BOOL success))completion;
- (void)logout;

- (void)updateChatClient;
- (void)updatePushToken:(NSData *)token;
- (void)receivedNotification:(NSDictionary *)notification;

- (NSString *)identity;

@end
