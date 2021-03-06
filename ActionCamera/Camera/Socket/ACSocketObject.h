//
//  ACSocketObject.h
//  ActionCamera
//
//  Created by Guisheng on 16/1/18.
//  Copyright © 2016年 AC. All rights reserved.
//

#import <Foundation/Foundation.h>

enum{
    SocketOfflineByServer,
    SocketOfflineByUser,
    SocketOfflineByOffline,//wifi 断开
};

@interface ACSocketObject : NSObject

@property (nonatomic,assign) int      msg_id;
@property (nonatomic,assign) int      token;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *param;
@property (nonatomic,strong) NSString *path;
@property (nonatomic,strong) NSString *heartbeat;

+ (instancetype)objectWithMsgID:(int)msg_id heartbeat:(NSString *)heartbeat;
+ (instancetype)objectWithMsgID:(int)msg_id type:(NSString *)type param:(NSString *)param path:(NSString *)path;
+ (instancetype)objectWithMsgID:(int)msg_id type:(NSString *)type param:(NSString *)param token:(int)token;
+ (instancetype)objectWithMsgID:(int)msg_id type:(NSString *)type param:(NSString *)param;
+ (instancetype)objectWithMsgID:(int)msg_id type:(NSString *)type;
+ (instancetype)objectWithMsgID:(int)msg_id;
@end
