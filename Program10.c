#include<stdio.h>
#define pi 3.14
float area_circle(int r)
{
    float area;
    area = pi*(r*r);
    return area;
}
int area_square(int s)
{
    int area;
    area = s*s;
    return area;
}
int area_rectangle(int l,int b)
{
    int area;
    area = l*b;
    return area;
}
int main()
{
    int choice;
    printf("Enter your choice : \n");
    printf("Enter 1 for area of circle\n");
    printf("Enter 2 for area of square\n");
    printf("Enter 3 for area of rectangle\n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        float result;
        int radius;
        printf("Enter the radius here : ");
        scanf("%d",&radius);
        result = area_circle(radius);
        printf("Area of circle is : %f",result);
    }
    else if(choice == 2)
    {
        int side;
        int result;
        printf("Enter the side of square : ");
        scanf("%d",&side);
        result = area_square(side);
        printf("Area of square is : %d",result);
    }
    else if(choice == 3)
    {
        int length,breadth;
        int result;
        printf("Enter the length of rectangle : ");
        scanf("%d",&length);
        printf("Enter the breadth of rectangle : ");
        scanf("%d",&breadth);
        result = area_rectangle(length,breadth);
        printf("Area of rectangle is : %d",result);
    }
    else{
        printf("Invalid choice");
    }

    return 0;
}