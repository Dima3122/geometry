#define CTEST_MAIN

#include "ctest.h"
#include "geometry.h"

CTEST(ssa, dasdas)
{
    int r = 1;
    
    float result = perimeter_circle(r);
    const float expected = 6.28;
    ASSERT_DBL_NEAR_TOL(expected ,result, 0.3);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}