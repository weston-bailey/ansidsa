#include "../src/math.h"
#include "junit.h"

JUNIT(test_math) {
	JDESCRIBE("JUNIT SHOULD BE JANKY AWESOME SAUCE");
    JASSERT(add(2, 2) == 4);
    JASSERT(sub(10, 4) == 6);
    JASSERT(add(0, 0) == 0);
	JDESCRIBE_END();
}
