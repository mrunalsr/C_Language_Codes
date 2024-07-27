//Using function calculate area of circle
#include<stdio.h>
#define pi 3.14
float area(int r)       //The function will return float value if we write here int then it will always return int value
{
    float b;
    b = pi*(r*r);
    return b ;
}
int main()
{
    int radius;
    float area_circle;
    printf("Enter the value of radius : ");
    scanf("%d",&radius);

    area_circle = area(radius);
    printf("Area of circle is : %f",area_circle);

    return 0;
}