//
//  TweetTableViewCell.h
//  Twitter
//
//  Created by Kenny Chu on 2015/7/1.
//  Copyright (c) 2015年 Kenny Chu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@interface TweetTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *userProfileImg;
@property (weak, nonatomic) IBOutlet UILabel *userName;
@property (weak, nonatomic) IBOutlet UILabel *screenName;
@property (weak, nonatomic) IBOutlet UILabel *createdAt;
@property (weak, nonatomic) IBOutlet UILabel *text;
@property (strong, nonatomic) Tweet *tweet;
@end
