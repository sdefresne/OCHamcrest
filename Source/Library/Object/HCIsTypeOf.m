//
//  OCHamcrest - HCIsTypeOf.m
//  Copyright 2013 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid, http://qualitycoding.org/
//  Docs: http://hamcrest.github.com/OCHamcrest/
//  Source: https://github.com/hamcrest/OCHamcrest
//

#import "HCIsTypeOf.h"

#import "HCDescription.h"
#import "HCRequireNonNilObject.h"


@implementation HCIsTypeOf
{
    Class _class;
}

+ (id)isTypeOf:(Class)type
{
    return [[self alloc] initWithType:type];
}

- (id)initWithType:(Class)aClass
{
    HCRequireNonNilObject(aClass);

    self = [super init];
    if (self)
        _class = aClass;
    return self;
}

- (BOOL)matches:(id)item
{
    return [item isMemberOfClass:_class];
}

- (void)describeTo:(id<HCDescription>)description
{
    [[description appendText:@"an exact instance of "]
                  appendText:NSStringFromClass(_class)];
}

@end


#pragma mark -

id<HCMatcher> HC_isA(Class aClass)
{
    return [HCIsTypeOf isTypeOf:aClass];
}