#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter number : ");
    scanf("%d", &x);
    for(y=0; y<x; y++)
    {
        if(y==0 || y==x-1)
        {
            printf("*");
            for(z=0; z<x-1; z++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }
        printf("*");
        for(z=0; z<x-2; z++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}