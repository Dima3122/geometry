#include <stdio.h>
#include <math.h>

int main()
{
	int x1,y1,r;
    printf("Круг ");
    scanf("%d", &x1);
    scanf("%d",&y1);
    scanf("%d", &r);
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
    scanf("%d", &xt1);
    scanf("%d", &yt1);
    scanf("%d", &xt2);
    scanf("%d", &yt2);
    scanf("%d",&xt3);
    scanf("%d", &yt3);

	return 0;
}