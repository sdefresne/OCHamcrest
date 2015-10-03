//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2015 hamcrest.org. See LICENSE.txt

#import <OCHamcrest/HCBaseMatcher.h>


/*!
 * @abstract Matches if collection size satisfies a nested matcher.
 */
@interface HCHasCount : HCBaseMatcher

+ (instancetype)hasCount:(id <HCMatcher>)countMatcher;
- (instancetype)initWithCount:(id <HCMatcher>)countMatcher;

@end


FOUNDATION_EXPORT id HC_hasCount(id <HCMatcher> countMatcher);

#ifdef HC_SHORTHAND
/*!
 * @abstract hasCount(countMatcher) -
 * Creates a matcher that matches when the examined object's <code>-count</code> satisfies the
 * specified matcher.
 * @param countMatcher A matcher for the count of an examined collection.
 * @discussion Creates a matcher that matches any examined object whose <code>-count</code> method
 * returns a value that satisfies the specified matcher.
 *
 * Example:
 * <ul>
 *   <li></code>assertThat(\@[\@"foo", \@"bar"], hasCount(equalTo(\@2)))</code></li>
 * </ul>
 *
 * @attribute Name Clash
 * In the event of a name clash, don't <code>#define HC_SHORTHAND</code> and use the synonym
 * HC_hasCount instead.
 */
#define hasCount HC_hasCount
#endif


FOUNDATION_EXPORT id HC_hasCountOf(NSUInteger count);

#ifdef HC_SHORTHAND
/*!
 * @abstract hasCountOf(value) -
 * Creates a matcher that matches when the examined object's <code>-count</code> equals the
 * specified value.
 * @param value NSUInteger value to compare against as the expected count.
 * @discussion Creates a matcher that matches any examined object whose <code>-count</code> method
 * returns a value that is equal to the specified <em>value</em>.
 *
 * Example:
 * <ul>
 *   <li></code>assertThat(\@[\@"foo", \@"bar"], hasCountOf(2))</code></li>
 * </ul>
 *
 * @attribute Name Clash
 * In the event of a name clash, don't <code>#define HC_SHORTHAND</code> and use the synonym
 * HC_hasCountOf instead.
 */
#define hasCountOf HC_hasCountOf
#endif
