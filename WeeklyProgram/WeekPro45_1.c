#include<stdio.h>
unsigned long long fac();
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
unsigned long long fac(int n)
{
    unsigned long long fac = 1;
    for (int i = n; i > 0; i--)
    {
        fac *=i;
    }
    return fac;
}