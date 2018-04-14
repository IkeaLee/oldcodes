#include <stdio.h>
int number(int num ,int n);
int main(void)
{
	int num = 5; 
	int n = 1;
	int sum = 0;
	sum = number(num,n);
	printf("%d\n",sum);
	return 0;
}

int number(int num,int n)
{
	if(num == 0)
	{
		return 0;
	}
	else if(num == 1)
	{
		return n;
	}
	return number(num-1,num*n);
	
}