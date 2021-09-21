#include<stdio.h>
int main()
{
    int n;
    int x,y;
    printf("Number of Pyramid : ");
    scanf("%d",&n);
    for(x = 1; x < 6; x++)
    {
        for(y = 9-x; y != 0; y--)
        {
            printf(" ");
        } 
        for(y = 1; y != x; y++)
        {
            printf("*");
        }
        for(y = x; y > 0; y--)
        {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}