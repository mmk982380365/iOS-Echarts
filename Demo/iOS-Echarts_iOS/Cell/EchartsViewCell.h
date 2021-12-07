//
//  EchartsViewCell.h
//  iOS-Echarts
//
//  Created by Pluto Y on 7/28/16.
//  Copyright © 2016 pluto-y. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WKEchartsView.h"

@interface EchartsViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet WKEchartsView *echartView;

@end
