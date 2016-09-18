#import <UIKit/UIKit.h>
@interface Line : NSObject
@property (nonatomic) CGPoint begin;
@property (nonatomic) CGPoint end;
- (instancetype)initWithBegin:(CGPoint)begin end:(CGPoint)end;
@end
