#include <stdio.h>
#include <stdint.h>

int main()
{
    long long num = 1;
    for(int i = 0 ; i< 32 ; i++)
    {
        num *= 2;
    }

    printf("%llu\n", num);
    printf("%llu\n", num/2);

    return 0;
}


