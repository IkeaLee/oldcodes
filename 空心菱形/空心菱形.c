#include<stdio.h>  
int main()  
{  
    int i,j;   
    for(i=1;i<10;i++)  
    {  
		for(j=1;j<28-i;j++)
		{
			if(j==10-i||j==8+i)
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
	for(i=1;i<9;i++)
	{
		for(j=0;j<17-i;j++)
		{
			if(j==16-i||j==i)
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
	return 0;    
} 