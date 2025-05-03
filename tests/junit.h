/* 
 * JUnit - the Jank Unit Testing Framework for ANSI C89
 * ------------------------------------------------              
 *  (_)  __ _  _ __  | |/ /| | | |_ __ (_) |_ 
 *  | | / _` || '_ \ | ' / | | | | '_ \| | __|
 *  | || (_| || | | || . \ | |_| | | | | | |_ 
 *  / | \__,_)|_| |_||_|\_\ \___/|_| |_|_|\__|
 * |__/                   
 * J A N K  U N I T  '8 9
 * ------------------------------------------------              
 * Like grandpa always said, "Its not pretty but, but it compiles"
 */

#ifndef JUNIT_H
#define JUNIT_H

#include <stdio.h>
#include <stdlib.h>

/* Global counters */
static int __tests_run = 0;
static int __tests_failed = 0;

/* Suite context */
static const char *__current_suite = NULL;
static int __current_indent = 0;

/* Optional defs */
#ifndef JDESC_INDENT
#define JDESC_INDENT "   "
#endif /* JDESC_INDENT */

#ifndef JDESC_OPEN
#define JDESC_OPEN "[=== "
#endif /* JDESC_OPEN */

#ifndef JDESC_CLOSE
#define JDESC_CLOSE " ===]"
#endif /* JDESC_CLOSE */

/* Optional hooks — override by defining JUNIT_CUSTOM_HOOKS before including this header */
#ifndef JUNIT_CUSTOM_HOOKS
static void junit_setup(void)    { /* no-op */ }
static void junit_teardown(void) { /* no-op */ }
#endif

/* Helper: Print indent spaces */
static void junit_print_indent(void) {
    int i;
    for (i = 0; i < __current_indent; ++i) {
        printf("%s", JDESC_INDENT);
    }
}

/* Macros */
#define JUNIT(test_name) \
    void test_name(void); \
    int main(void) { \
        printf("Running: %s\n\n", #test_name); \
        test_name(); \
        printf("\nTests run: %d\n", __tests_run); \
        printf("Tests failed: %d\n", __tests_failed); \
        return __tests_failed ? 1 : 0; \
    } \
    void test_name(void)

#define JSUITE(name) \
    do { \
        __current_suite = name; \
        junit_print_indent(); \
        printf(JDESC_OPEN"%s" JDESC_CLOSE "\n", __current_suite); \
		if (__current_indent == 0) junit_setup(); \
        ++__current_indent; \
    } while (0)

#define JSUITE_END() \
    do { \
        printf(JDESC_OPEN"%s" JDESC_CLOSE "\n", __current_suite); \
        __current_indent = 0; \
		junit_teardown(); \
    } while (0)

#define JDESCRIBE(message) \
    do { \
        junit_print_indent(); \
        printf("%s\n", message); \
        ++__current_indent; \
    } while (0)

#define JASSERT(expr) do { \
    ++__tests_run; \
    junit_print_indent(); \
    if (!(expr)) { \
        ++__tests_failed; \
        printf("FAIL [%s] %s:%d: Assertion '%s' failed.\n", \
            __current_suite ? __current_suite : "Global", __FILE__, __LINE__, #expr); \
    } else { \
        printf("PASS: %s\n", #expr); \
    } \
} while (0)

#endif /* JUNIT_H */
