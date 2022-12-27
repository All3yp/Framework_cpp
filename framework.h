#ifndef FRAMEWORK_H
# define FRAMEWORK_H

#include <iostream>

# define SUCCESS "\033[32m[SUCCESS ✓]\033[33m"
# define FAILURE "\x1b[31m[FAILURE ✗]\033[33m"
# define ERROR "\033[91m[ERROR ✗]\033[94m"
# define SKIP "\033[93m[SKIP ⚠]\033[94m"
# define WARNING "\033[93m[WARNING ⚠]\033[94m"

# define assert_equals(a,b) ASSERT_EQUALS(a, b)

int ASSERT_EQUALS(int expected, int result);

#endif
