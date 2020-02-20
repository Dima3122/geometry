#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int Sidelength(int a, int b, int c, int d)
{   
    float q=((c-a)*(c-a)+(d-b)*(d-b)); 
  
return q;
}



int main()
{
    double l=sqrt(5);
    printf("%f\n", l);

    int x1,y1,r;
    printf("Круг ");
    scanf("%d %d %d", &x1, &y1, &r);
    int xt1, xt2, yt1, yt2, xt3, yt3;
    
        while(r<=0)
    {
        printf("Введите другое число больше 0  ");
        scanf("%d", &r);
    }
        
    float Perk = 2*M_PI*r;
    printf("Периметр окружности равен: %f \n", Perk);
    
    float Plosk = M_PI*r*r;
    printf("Площадь круга равна: %f\n", Plosk);
   
    printf("Треугольник");
    scanf("%d %d %d %d %d %d", &xt1, &yt1, &xt2, &yt2, &xt3, &yt3);
    
    float ab=Sidelength(xt1, yt1, xt2, yt2);
    ab = sqrt(ab);
    
    float ac=Sidelength(xt1, yt1, xt3, yt3);
    ac = sqrt(ac);

    float bc=Sidelength(xt2, yt2, xt3, yt3);
    bc = sqrt(bc);

	return 0;
}