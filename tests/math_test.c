#include "../src/math.h"
#include "junit.h"

JUNIT(test_math) {
	JSUITE("arithmitic");
	JDESCRIBE("JUNIT SHOULD BE JANKY AWESOME SAUCE");
    JASSERT(add(2, 2) == 4);
    JASSERT(sub(10, 4) == 6);
    JASSERT(add(0, 0) == 0);
	JSUITE_END();
}
