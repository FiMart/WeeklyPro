#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter Number : ");
    scanf("%d",&a);
    b = 1;
    d = a-1;
    do
	{
        
    	for(c=1; c<=b; c++)
    	{
    		printf(" * ");
		}	
    	for(c=1; c<2*(a-b); c++)
    	{
    		printf("   ");
		}
		for(c=1; c<=b; c++)
    	{
    		printf(" * ");
		}
		b++;
		printf("\n");

    }while(b < a);
    for(c=1; c<=(2*a)-1; c++)
    {
    	printf(" * ");
	}
	printf("\n");
    
    do
	{
    	for(c=1; c<=d; c++)
    	{
    		printf(" * ");
		}	
    	for(c=1; c<2*(a-d); c++)
    	{
    		printf("   ");
		}
		for(c=1; c<=d; c++)
    	{
    		printf(" * ");
		}
		d--;
		printf("\n");
		
	}while(d > 0);
}