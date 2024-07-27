//Addition of two numbers
#include<stdio.h>
int sum(int No1, int No2)
{
    return No1+No2;
}
int main()
{
    int value1=10,value2=11;
    int result;
    result = sum(value1,value2);
    printf("The sum of two numbers is :%d ",result);
    return 0;
}