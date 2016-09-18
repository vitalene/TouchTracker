
#import "Line.h"

@implementation Line
- (instancetype)initWithBegin:(CGPoint)begin end:(CGPoint)end {
    self = [super init];
    if (self) {
        _begin = begin;
        _end = end; }
    return self;
}
@end
