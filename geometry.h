#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Sidelength(int a, int b, int c, int d);
void proverka(int* x1, int* y1, int* x2, int* y2, int* x3, int* y3);
void checkcircle(int x1, int y1, int *r);
float perimeter_circle(int r);
float area_circle(int r);
float per_treyg(int xt1, int xt2, int yt1, int yt2, int xt3, int yt3);
float area_treyg(int xt1, int xt2, int yt1, int yt2, int xt3, int yt3);