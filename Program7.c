//calculate area od circle
#include<stdio.h>
#define pi 3.14
int main()
{
    int radius;
    float area;
    printf("Enter the value of radius : ");
    scanf("%d",&radius);

    area = pi*(radius*radius);
    printf("Area of circle is : %f",area);

    return 0;
}