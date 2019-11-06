//
//  EEBCTeactherAttr.h
//  AgoraMiniClass
//
//  Created by yangmoumou on 2019/10/31.
//  Copyright © 2019 yangmoumou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EEBCTeactherAttr : NSObject
@property (nonatomic, copy)   NSString *account;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, assign) BOOL video;
@property (nonatomic, assign) BOOL auudio;
@property (nonatomic, assign) BOOL screen;
@property (nonatomic, assign) BOOL whiteboard;
@property (nonatomic, assign) BOOL chatroom;
@property (nonatomic, copy)   NSString *whiteboard_uuid;
@property (nonatomic, copy)   NSString *connect_state;
@property (nonatomic, copy)   NSString *link_state;
@property (nonatomic, copy) NSString *shareId;
@end

NS_ASSUME_NONNULL_END
