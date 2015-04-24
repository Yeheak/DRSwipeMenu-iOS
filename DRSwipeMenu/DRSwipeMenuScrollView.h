//
// Created by Dariusz Rybicki on 24/04/15.
// Copyright (c) 2015 Darrarski. All rights reserved.
//

#import <UIKit/UIkit.h>

@interface DRSwipeMenuScrollView : UIScrollView

@property (nonatomic, weak, readonly) UIView *closedViewsContainer;
@property (nonatomic, weak, readonly) UIView *mainViewContainer;
@property (nonatomic, weak, readonly) UIView *leftOpenHandleViewContainer;
@property (nonatomic, weak, readonly) UIView *rightOpenHandleViewContainer;
@property (nonatomic, weak, readonly) UIView *leftCloseHandleViewContainer;
@property (nonatomic, weak, readonly) UIView *rightCloseHandleViewContainer;
@property (nonatomic, weak, readonly) UIView *leftMenuItemViewsContainer;
@property (nonatomic, weak, readonly) UIView *rightMenuItemViewsContainer;

- (void)scrollToLeftMenuAnimated:(BOOL)animated;
- (void)scrollToRightMenuAnimated:(BOOL)animated;
- (void)scrollToMainViewAnimated:(BOOL)animated;

@end
