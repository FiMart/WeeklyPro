#include<stdio.h>
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d", &x);
    int y,z;
    for (y=0; y<x; y++)
    {
        if(y==0 || y==x-1)
            for(z=0; z<x; z++)
            printf("*");
        else
            for (z=0; z<x; z++)
            {
                if(z==0 || z==x-1)
                {
                    printf("*");
                }  
                else
                {
                    printf(" ");
                }   
            }
            printf("\n");
    }
}
