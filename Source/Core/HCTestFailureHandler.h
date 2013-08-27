#import <Foundation/Foundation.h>


@protocol HCTestFailureHandler <NSObject>

@property (nonatomic, strong) id <HCTestFailureHandler> successor;

/**
    Signal test failure at specific location.
 */
- (void)signalFailureInTestCase:(id)testCase
                       fileName:(const char *)fileName
                     lineNumber:(int)lineNumber
                    description:(NSString *)description;

@end
