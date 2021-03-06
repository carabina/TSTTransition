//
//  TSTDismissInteractiveTransition.h
//  TecentSportTransition
//
//  Created by pantosoft on 2018/11/8.
//  Copyright © 2018年 jianghongbing. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@class TSTDismissInteractiveTransition;
@protocol TSTInteractiveDismissTransitionDelegate <NSObject>
@optional
- (void)dismissInteractiveTransition:(TSTDismissInteractiveTransition *)dismissInteractiveTransition didFinish:(BOOL)finished;

- (void)dismissInteractiveTransition:(TSTDismissInteractiveTransition *)dismissInteractiveTransition updateAnimationProgress:(float)progress;


@end

@interface TSTDismissInteractiveTransition : UIPercentDrivenInteractiveTransition
- (instancetype)initWithViewController:(nonnull UIViewController *)viewController
                        triggerPercent:(CGFloat)triggerPercent
   enabledInteractiveDismissTransition:(BOOL)enabledInteractiveDismissTransition;
@property (nullable, nonatomic, strong, readonly) UIPanGestureRecognizer *dismissInteractiveGestureRecognizer;
@property (nullable, nonatomic, weak) id<TSTInteractiveDismissTransitionDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
