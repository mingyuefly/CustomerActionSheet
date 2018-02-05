//
//  MYLayoutRate.h
//
//
//  Created by WBYAN on 16/7/13.
//  Copyright © 2016年 GFinance. All rights reserved.
//

#ifndef MYLayoutRate_h
#define MYLayoutRate_h

#include <stdio.h>
float layoutRateByHeight(float orginLayout);
float layoutRateByHeightForPlus(float orginLayout);
#endif /* MYLayoutRate_h */

#import <UIKit/UIKit.h>
@interface MYLayoutRate :NSObject
+ (CGFloat)layoutRateByOCHeight:(CGFloat)orginLayout;
+ (CGFloat)layoutRateByOCHeightForPlus:(CGFloat)orginLayout;
@end
