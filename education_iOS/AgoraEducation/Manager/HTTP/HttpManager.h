//
//  CYXHttpRequest.h
//  TenMinDemo
//
//  Created by apple开发 on 16/5/31.
//  Copyright © 2016年 CYXiang. All rights reserved.
//

#import <Foundation/Foundation.h>

#define HTTP_BASE_URL @"http://115.231.168.26:8080/edu"

// http: get app config
#define HTTP_GET_CONFIG @""HTTP_BASE_URL"/v1/room/config"

// http: get global state when enter room
#define HTTP_POST_ENTER_ROOM @""HTTP_BASE_URL"/v1/apps/%@/room/entry"

// http: get global state
#define HTTP_GET_ROOM_INFO @""HTTP_BASE_URL"/v1/apps/%@/room/%@"

// http: get app version
#define HTTP_GET_APP_VERSION @""HTTP_BASE_URL"/v1/app/version"

@interface HttpManager : NSObject

+ (void)get:(NSString *)url params:(NSDictionary *)params headers:(NSDictionary<NSString*, NSString*> *)headers success:(void (^)(id))success failure:(void (^)(NSError *))failure;

+ (void)post:(NSString *)url params:(NSDictionary *)params headers:(NSDictionary<NSString*, NSString*> *)headers success:(void (^)(id responseObj))success failure:(void (^)(NSError *error))failure;

+ (void)POSTWhiteBoardRoomWithUuid:(NSString *)uuid token:(void (^)(NSString *token))token failure:(void (^)(NSString *msg))failure;

@end