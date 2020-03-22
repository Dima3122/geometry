#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Вычесление сторон треугольника
float Sidelength(int a, int b, int c, int d)
{
    float q = ((c - a) * (c - a) + (d - b) * (d - b));
    float l = sqrt(q);

    return l;
}
//Проверка координат треугольника
void proverka(int* x1, int* y1, int* x2, int* y2, int* x3, int* y3)
{
        int q = isalpha(*x1);
    int w = isalpha(*y1);
    int e = isalpha(*x2);
    int s = isalpha(*y2);
    int t = isalpha(*x3);
    int y = isalpha(*y3);

    if (q != 0 || w != 0 || e != 0 || s != 0 || t != 0 || y != 0) {
        exit(1);
    }


    while (*x1 == *x2 || *x1 == *x3 || *x2 == *x3) {
        printf("Введите новый параметр x1, x2, x3\n");
        scanf("%d %d %d", &*x1, &*x2, &*x3);
    }

    while (*y1 == *y2 || *y1 == *y3 || *y2 == *y3) {
        printf("Введите новый параметр y1, y2, y3\n");
        scanf("%d %d %d", &*y1, &*y2, &*y3);
    }
}
void checkcircle(int x1, int y1, int *r)
{
 //Проверка радиуса окружности
    int a = isalpha(x1);
    int b = isalpha(y1);
    int c = isalpha(*r);

    if (a != 0 || b != 0 || c != 0) {
        exit(1);
    }

    while (r <= 0) 
    {
        printf("Введите другое число больше 0  ");
        scanf("%d", &*r);
    }
}

float perimeter_circle(int r)
{
     float Perk = 2*M_PI*r;
    return Perk;
}

float area_circle(int r)
{
    float Plosk = M_PI * r * r;
    return Plosk;
}

float per_treyg(int xt1, int xt2, int yt1, int yt2, int xt3, int yt3)
{
    float ab = Sidelength(xt1, yt1, xt2, yt2);
    float ac = Sidelength(xt1, yt1, xt3, yt3);
    float bc = Sidelength(xt2, yt2, xt3, yt3);
    float Per_t = ab + ac + bc;
    return Per_t;
}

float area_treyg(int xt1, int xt2, int yt1, int yt2, int xt3, int yt3)
{
    float ab = Sidelength(xt1, yt1, xt2, yt2);
    float ac = Sidelength(xt1, yt1, xt3, yt3);
    float bc = Sidelength(xt2, yt2, xt3, yt3);
    float Per_t = ab + ac + bc;
    float polyper = Per_t / 2;
    float Plos_t = polyper * sqrt(sqrt(polyper - ab)) + (sqrt(polyper - ac))
            + (sqrt(polyper - bc));
    return Plos_t;
}