//
//  ACPDownloadConstants.h
//  CQXZ
//
//  Created by 七 on 15/8/27.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ACPDownloadConstants : NSObject

extern NSString *const kACPStrokeAnimationKey;
extern NSString *const kACPRotationAnimationKey;

typedef NS_ENUM(NSUInteger, ACPDownloadStatus) {
    ACPDownloadStatusNone,
    ACPDownloadStatusRunning,
    ACPDownloadStatusIndeterminate,
    ACPDownloadStatusCompleted,
    
};

@end