//
//  UIScrollView+TwitterCover.h
//  TwitterCover
//
//  Created by hangchen on 1/7/14.
//  Copyright (c) 2014 Hang Chen (https://github.com/cyndibaby905)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <UIKit/UIKit.h>


@interface CHTwitterCoverView : UIImageView

@property (nonatomic, weak) UIScrollView *scrollView;
@property (nonatomic, assign) BOOL noBlur;
@property (nonatomic, assign) BOOL noDim;
@property (nonatomic, assign) BOOL noContentInset;

- (id)initWithFrame:(CGRect)frame andContentTopView:(UIView *)view;

@end

#pragma mark -

@interface UIScrollView (TwitterCover)

@property (nonatomic, strong) CHTwitterCoverView *twitterCoverView;

- (void)addTwitterCoverWithImage:(UIImage *)image coverHeight:(CGFloat)coverHeight;
- (void)addTwitterCoverWithImage:(UIImage *)image coverHeight:(CGFloat)coverHeight noBlur:(BOOL)noBlur;
- (void)addTwitterCoverWithImage:(UIImage *)image coverHeight:(CGFloat)coverHeight withTopView:(UIView *)topView;
- (void)addTwitterCoverWithImage:(UIImage *)image coverHeight:(CGFloat)coverHeight noBlur:(BOOL)noBlur withTopView:(UIView *)topView;

@end

#pragma mark -

@interface UIImage (Blur)
-(UIImage *)boxblurImageWithBlur:(CGFloat)blur;
@end