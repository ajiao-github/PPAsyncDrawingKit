//
//  WBTimelineItem.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 2016/10/14.
//  Copyright © 2016年 DSKcpp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WBCardModel;
@class WBTimelineItem;
@class WBUser;
@class WBCardUserBadge;
@class WBPictureMetadata;
@class WBTimelinePicture;
@class WBTimelineTableViewCellDrawingContext;
@class WBTimelineTitle;
@class WBURLStruct;

@interface WBCardsModel : NSObject
@property (nonatomic, strong) NSArray<WBCardModel *> *cards;
@end

@interface WBCardModel : NSObject
@property (nonatomic, copy) NSString *itemid;
@property (nonatomic, copy) NSString *scheme;
@property (nonatomic, strong) WBTimelineItem *mblog;
@end

@interface WBTimelineItem : NSObject
@property (nonatomic, copy) NSString *created_at;
@property (nonatomic, copy) NSString *mid;
@property (nonatomic, copy) NSString *idstr;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) NSUInteger textLength;
@property (nonatomic, assign) NSUInteger source_allowclick;
@property (nonatomic, assign) NSUInteger  source_type;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, assign) NSUInteger appid;
@property (nonatomic, assign) BOOL favorited;
@property (nonatomic, assign) BOOL truncated;
@property (nonatomic, copy) NSString *in_reply_to_status_id;
@property (nonatomic, copy) NSString *in_reply_to_user_id;
@property (nonatomic, copy) NSString *in_reply_to_screen_name;
@property (nonatomic, strong) NSArray<NSString *> *pic_ids;
@property (nonatomic, copy) NSString *bmiddle_pic;
@property (nonatomic, copy) NSString *original_pic;
@property (nonatomic, copy) NSString *geo;
@property (nonatomic, strong) WBUser *user;
@property (nonatomic, assign) NSInteger reposts_count;
@property (nonatomic, assign) NSInteger comments_count;
@property (nonatomic, assign) NSInteger attitudes_count;
@property (nonatomic, assign) BOOL isLongText;
@property (nonatomic, strong) WBTimelineItem *retweeted_status;
@property (nonatomic, strong) NSDictionary<NSString *, WBTimelinePicture *> *pic_infos;
@property (nonatomic, strong) WBTimelineTitle *title;
@property (nonatomic, strong) NSArray<WBURLStruct *> *url_struct;

@property (nonatomic, strong) WBTimelineTableViewCellDrawingContext *drawingContext;
@end

@interface WBUser : NSObject
@property (nonatomic, copy) NSString *idstr;
@property (nonatomic, copy) NSString *screen_name;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *profile_image_url;
@property (nonatomic, copy) NSString *profile_url;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *avatar_large;
@property (nonatomic, copy) NSString *avatar_hd;
@property (nonatomic, assign) NSInteger bi_followers_count;
@property (nonatomic, copy) NSString *lang;
@property (nonatomic, assign) NSInteger star;
@property (nonatomic, assign) NSInteger mbtype;
@property (nonatomic, assign) NSInteger mbrank;
@property (nonatomic, assign) NSInteger block_word;
@property (nonatomic, assign) NSInteger block_app;
@property (nonatomic, assign) NSInteger level;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, assign) NSInteger ulevel;
@property (nonatomic, copy) NSString *badge_top;
@property (nonatomic, assign) NSInteger has_ability_tag;
@end

@interface WBTimelinePicture : NSObject
@property (nonatomic, copy) NSString *object_id;
@property (nonatomic, copy) NSString *pic_id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, assign) NSInteger *photo_tag;
@property (nonatomic, assign) NSInteger *pic_status;
@property (nonatomic, strong) WBPictureMetadata *thumbnail;
@property (nonatomic, strong) WBPictureMetadata *bmiddle;
@property (nonatomic, strong) WBPictureMetadata *middleplus;
@property (nonatomic, strong) WBPictureMetadata *large;
@property (nonatomic, strong) WBPictureMetadata *original;
@property (nonatomic, strong) WBPictureMetadata *largest;
@end

@interface WBPictureMetadata : NSObject
@property (nonatomic, assign) NSInteger cutType;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, copy) NSString *url;
@end

@interface WBTimelineTitle : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) NSInteger base_color;
@property (nonatomic, copy) NSString *icon_url;
@end

@interface WBURLStruct : NSObject
@property (nonatomic, copy) NSString *url_title;
@property (nonatomic, copy) NSString *url_type_pic;
@property (nonatomic, copy) NSString *ori_url;
@property (nonatomic, copy) NSString *page_id;
@property (nonatomic, copy) NSString *short_url;
@property (nonatomic, copy) NSString *log;
@property (nonatomic, assign) NSInteger url_type;
@property (nonatomic, assign) NSInteger position;
@property (nonatomic, assign) BOOL result;
@end
