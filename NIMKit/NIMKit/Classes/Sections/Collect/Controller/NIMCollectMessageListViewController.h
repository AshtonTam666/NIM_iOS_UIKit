//
//  NIMCollectListViewController.h
//  NIMKit
//
//  Created by 丁文超 on 2020/3/19.
//  Copyright © 2020 NetEase. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NIMMessageCell.h"
#import "NIMMessageModel.h"
#import "NIMKit.h"
#import "NIMMessageMaker.h"
#import <NIMSDK/NIMSDK.h>
#import "NSString+NIMKit.h"
#import "NIMKitAudioCenter.h"
#import "NIMMessageCellFactory.h"

@class NIMSession;
@class NIMKitEvent;
@class NIMMessage;

NS_ASSUME_NONNULL_BEGIN

@interface NIMCollectMessageListViewController : UIViewController<NIMMessageCellDelegate>

@property (nonatomic, readonly) UITableView *tableView;

@property (nonatomic, nullable) NIMMessage *nimMessage;
@property (nonatomic, nullable) NIMCollectInfo *collectInfo;

@end

NS_ASSUME_NONNULL_END
