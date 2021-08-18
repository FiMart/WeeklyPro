#include<stdio.h>
int main()
{   
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%d", a * (a <= b && a <=c) + b * (b < a && b <= c) + c * (c < a && c < b));
    return 0;
}