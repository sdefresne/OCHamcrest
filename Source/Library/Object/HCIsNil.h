//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2015 hamcrest.org. See LICENSE.txt

#import <OCHamcrest/HCBaseMatcher.h>


/*!
 * @abstract Is the value nil?
 */
@interface HCIsNil : HCBaseMatcher

+ (id)isNil;

@end


FOUNDATION_EXPORT id HC_nilValue(void);

#ifdef HC_SHORTHAND
/*!
 * @abstract Creates a matcher that matches when the examined object is <code>nil</code>.
 * @discussion Example:
 * <ul>
 *   <li><code>assertThat(myObject, nilValue())</code></li>
 * </ul>
 *
 * @attribute Name Clash
 * In the event of a name clash, don't <code>#define HC_SHORTHAND</code> and use the synonym
 * HC_nilValue instead.
 */
#define nilValue() HC_nilValue()
#endif


FOUNDATION_EXPORT id HC_notNilValue(void);

#ifdef HC_SHORTHAND
/*!
 * @abstract Creates a matcher that matches when the examined object is not <code>nil</code>.
 * @discussion Example:
 * <ul>
 *   <li><code>assertThat(myObject, notNilValue())</code></li>
 * </ul>
 *
 * @attribute Name Clash
 * In the event of a name clash, don't <code>#define HC_SHORTHAND</code> and use the synonym
 * HC_notNilValue instead.
 */
#define notNilValue() HC_notNilValue()
#endif
