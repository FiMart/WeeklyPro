#include<stdio.h>
int pattern(int x,int y,int z){
    if (y!=x){

            if (z!=y)
            {
                printf("*");
                pattern(x,y+1,z);                
            }
            else{
                y=0;
                printf("\n");
                pattern(x,y,z+1);  
            }
    }     
          
}

int main()
{
    int x;
    int y=0;
    int z=0;
    scanf("%d",&x);
    pattern(x,y,z);
}