#define CTEST_MAIN

#include "ctest.h"
#include "geometry.h"

CTEST(test, perimeter_circl)
{
    int r = 1;
    
    float result = perimeter_circle(r);
    const float expected = 6.28;
    ASSERT_DBL_NEAR_TOL(expected ,result, 0.1);
}

CTEST(test, per_treg)
{
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;
    int x3 = 5;
    int y3 = 6;

    float result = per_treyg(x1, x2, y1, y2, x3, y3);
    const float expected = 11.31;
    ASSERT_DBL_NEAR_TOL(expected ,result, 0.1);
}

CTEST(test, area_treg)
{
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;
    int x3 = 5;
    int y3 = 6;

    float result = area_treyg(x1, x2, y1, y2, x3, y3);
    const float expected = 9.01;
    ASSERT_DBL_NEAR_TOL(expected ,result, 0.1);
}

CTEST(test, area_circl)
{
    int r = 1;
    float result = area_circle(r);
    const float expected = 3.14;
    ASSERT_DBL_NEAR_TOL(expected ,result, 0.1);
}

CTEST(test, sidelength)
{
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;
    float result = Sidelength(x1, y1 ,x2, y2);
    const float expected = 2.82;
    ASSERT_DBL_NEAR_TOL(expected ,result, 0.1);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}