#include<stdio.h>
unsigned long long fac(int n)
{
    if (n == 1)
    {
        return n;
    }
    if (n==0)
    {
        return 1;
    }
    return n*fac(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        printf("please, Enter Positive number");
        return 0;
    }
    
    printf("%d! = %llu",n,fac(n));
}