//
//  ExampleCell.h
//  CQXZ
//
//  Created by 七 on 15/8/27.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ACPDownloadView.h"

@interface ExampleCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *exampleLabel;
@property (weak, nonatomic) IBOutlet ACPDownloadView *exampleIndicator;


@end
