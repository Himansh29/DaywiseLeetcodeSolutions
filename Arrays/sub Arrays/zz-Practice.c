#include <stdio.h>
#define max(a,b) ((a>b)? (a) : (b))
int main()
{
    int a = 100, b = 4, c = 9, d = 3, e = 90;
    
    printf("%d", max(a,max(b,max(c,max(d,e)))));

    return 0;
}