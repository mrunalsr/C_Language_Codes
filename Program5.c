//Take input from user
#include<stdio.h>
int sum(int no1,int no2)
{
    return no1+no2;
}
int main()
{
    int value1,value2,result;
    printf("Enter the value of first number : ");
    scanf("%d",&value1);
    printf("Enter the value of 2nd number : ");
    scanf("%d",&value2);

    result = sum(value1,value2);
    printf("The sum of these number is : %d",result);
    return 0;
}