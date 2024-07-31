//Swap 2 numbers
#include<stdio.h>
int main()
{
    int a = 6;
    int b = 7;
    int temp = 0;
    printf("Value of a before swapping : %d\n",a);
    printf("Value of b before swapping : %d\n",b);

    temp = a;
    a = b;
    b = temp;
    printf("Value of a after swapping  : %d\n",a);
    printf("Value of b after swapping : %d",b);
    return 0;
}