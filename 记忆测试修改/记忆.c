#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>
#define TIME 2*CLOCKS_PER_SEC 
int main(void)
{
	char nee;
	time_t sta = 0;
	clock_t wait = 0;
	int i;
	int j = 1;
	int n = 0;
	int digts = 0;
	int temp = 0;
	int number = 0;
	time_t seed;

	do{
	
	++n;
	digts = 2;
	j=1;
	while(j)
	{
	++n;	
	srand(time(&seed));
	sta = clock();
	for(i=1;i<=digts;++i)
	{
		printf("%d ",rand()%10);
	}
	for(;clock()-sta<TIME;);
	printf("\r");
	for(i=1;i<digts*2;++i)
	{
		printf(" ");
	}
	printf("\n");
	srand(seed);
	for(i=1;i<=digts;++i)
	{
		scanf("%d",&number);
		if(number!=rand()%10)
		{
			j = 0;
			break;
		}
	}
	if((n%3==0)&&j)
	{
		++digts;
	}
}
	system("pause");
	fflush(stdin);
	printf("continue?(y/n)");
	if(toupper((nee=getchar()))=='Y')
	{
		nee = 1;
	}
	else 
	{
		nee = 0;
	}

}while(nee);
return 0;
}