#include<stdio.h>
int main()
{
    int a = 10;
    float b = 12.34;
    char c = 'A';
    double d = 12.34567890;

    printf("Value of int a is : %d\n",a);
    printf("The size of int data type is : %d\n",sizeof(a));
    printf("Value of float b is : %f\n",b);
    printf("The size of float data type is : %d\n",sizeof(b));
    printf("Value of char c is : %c\n",c);
    printf("The size of char data type is : %d\n",sizeof(c));
    printf("Value of the double d is : %f\n",d);
    printf("The size of double data type is : %d\n",sizeof(d));

    return 0;

}