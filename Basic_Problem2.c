//Printing numbers from 1 to n without using loop
#include<stdio.h>
void Display(int No,int current)
{
    if(current>No)
    {   
        return;   
    }
    printf("%d\n",current);
    Display(No, current+1);
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    Display(n,1);
    return 0;
}

