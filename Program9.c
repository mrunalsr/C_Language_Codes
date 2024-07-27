//Calculate area of circle, square,rectangle
#include<stdio.h>
#define pi 3.14
void area_circle()
{
    int radius;
    float area;
    printf("Enter the value of radius : ");
    scanf("%d",&radius);
    area = pi*(radius*radius);
    printf("area of circle is : %f",area);

}
void area_rectangle()
{
    int length,breadth;
    float area;
    printf("Enter the value of length : ");
    scanf("%d",&length);
    printf("Enter the value of breadth : ");
    scanf("%d",&breadth);
    area = length*breadth;
    printf("area of rectangle is : %f",area);

}
void area_square()
{
    int side;
    float area;
    printf("Enter the value of side : ");
    scanf("%d",&side);
    area = side*side;
    printf("area of square is : %f",area);

}
int main()
{
    int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        area_circle();
    }
    else if(choice == 2)
    {
        area_square();
    }
    else if(choice == 3)
    {
        area_rectangle();
    }
    else{
        printf("Enter valid input");
    }
    
    return 0;
}