#include <stdio.h>
#include <limits.h>

int main()
{
    //char
    char c_min = CHAR_MIN;
    char c_max = CHAR_MAX;

    //short
    short s_min = SHRT_MIN;
    short s_max = SHRT_MAX;

    //int
    int i_min = INT_MIN;
    int i_max = INT_MAX;

    //long
    long l_min = LONG_MIN;
    long l_max = LONG_MAX;

    // long long
    long long ll_min = LLONG_MIN;
    long long ll_max = LLONG_MAX;
    
    printf("char 자료형 범위 :%d ~ %d\n", c_min, c_max);
    printf("short 자료형 범위 :%d ~ %d\n", s_min, s_max);
    printf("int 자료형 범위 :%d ~ %d\n", i_min, i_max);
    printf("long 자료형 범위 :%ld ~ %ld\n", l_min, l_max);
    printf("long long 자료형 범위 :%lld ~ %lld\n", ll_min, ll_max);

}
