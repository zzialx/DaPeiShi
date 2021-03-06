//
//  TR_LikeDressView.h
//  DaPeiShi
//
//  Created by admin on 2019/8/7.
//  Copyright © 2019 candy.chen. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TR_LikeDressView : UIView

- (instancetype)initWithFrame:(CGRect)frame data:(NSArray*)data;

- (void)updateTableHeight:(CGFloat)height;
@end

NS_ASSUME_NONNULL_END
