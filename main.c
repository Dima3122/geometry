#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "geometry.h"

int main()
{
    int x1, y1, r, xt1, xt2, yt1, yt2, xt3, yt3;
    printf("     x y r \n");
    printf("Круг ");
    scanf("%d %d %d", &x1, &y1, &r);
    checkcircle(x1, y1, &r);
    //Вычисление периметра круга
    float Perk = perimeter_circle(r);
    printf("Периметр окружности равен: %f \n", Perk);
    //Вычисление площади круга
    float Plosk = area_circle(r);
    printf("Площадь круга равна: %f\n", Plosk);
    printf("            x1 y1 x2 y2 x3 y3 \n");
    printf("Треугольник ");
    scanf("%d %d %d %d %d %d", &xt1, &yt1, &xt2, &yt2, &xt3, &yt3);
    proverka(&xt1, &yt1, &xt2, &yt2, &xt3, &yt3);
    float Per_t = per_treyg(xt1, xt2, yt1, yt2, xt3, yt3);
    printf("Периметр треугольника равен: %f\n", Per_t);
    float Plos_t=area_treyg(xt1, xt2, yt1, yt2, xt3, yt3);
    printf("Площадь треугольника равна: %f\n", Plos_t);

    return 0;
}