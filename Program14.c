#include<stdio.h>
int main()
{
    unsigned short ushort_int = 56;
    signed short signed_short = -9;
    int a = 99945624;
    long int long_int = 456789;
    long long int ll_int = 999556248561;

    printf("%zu\n",sizeof(short int));
    printf("%zu\n",sizeof(int));
    printf("%zu\n",sizeof(long));
    printf("%zu\n",sizeof(long long));
    return 0;
}