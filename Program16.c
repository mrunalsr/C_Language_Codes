#include<stdio.h>
int sum_of_digit(int no)
{
    int total =0;
    while(no != 0)
    {
        total = total + (no%10);
        no = no/10;
    }
    return total;
}
int main()
{
    int number,result;
    printf("Enter the number : ");
    scanf("%d",&number);
    result = sum_of_digit(number);
    printf("The result is %d",result);
    return 0;
}