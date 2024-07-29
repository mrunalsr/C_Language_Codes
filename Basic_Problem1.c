//sum of 1 to n numbers
#include<stdio.h>

int main()
{
    int n ;
    int total = 0;
    printf("Enter the value upto which you want the addition (n) : ");
    scanf("%d",&n);

    for(int i =0;i<=n;i++)
    {
        
        total = total +i;
    }
    printf("The total of n numbers is : %d",total);
    return 0;
}