#include "framework.h"

int ASSERT_EQUALS(int expected, int result)
{
    if (expected != result)
    {
        std::cout << FAILURE << ": expected " << expected << ", got " << result << std::endl;
        return 0;
    }
    else
    {
        std::cout << SUCCESS << ": expected " << expected << ", got " << result << std::endl;
        return 1;
    }
    return 1;
}
