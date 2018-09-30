#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b[100];
    scanf("%d",&a);
    itoa(a,b,2);
    printf("%s",b);
}