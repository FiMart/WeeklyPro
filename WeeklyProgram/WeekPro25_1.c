#include <stdio.h>
int main()
{   
    int n;
    printf("Number of Pyramid : ");
    scanf("%d", &n);
    int x,y,z;
    for(x = 1; x <= n; x++)
    {
        z = n-x;
        for(y = 1; y <= z; y++ )
        {
            printf(" ");
        }
        for(y = 1; y <= n-z; y++)
        {
            printf("*");
        }
        for(y = n-z-1; y >= 1; y--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}