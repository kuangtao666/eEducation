//
//  EEBCTeactherAttr.m
//  AgoraMiniClass
//
//  Created by yangmoumou on 2019/10/31.
//  Copyright © 2019 yangmoumou. All rights reserved.
//

#import "EEBCTeactherAttr.h"

@implementation EEBCTeactherAttr
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{
    @"video":@"attrs.video",
    @"auudio":@"attrs.audio",
    @"screen":@"attrs.screen",
    @"whiteboard":@"attrs.whiteboard",
    @"chatroom":@"attrs.chatroom",
    @"connect_state":@"attrs.connect_state",
    @"link_state":@"attrs.link_state",
    @"whiteboard_uuid":@"attrs.whiteboard_uuid",
    @"shareId":@"attrs.shareId",
    };
}
@end
