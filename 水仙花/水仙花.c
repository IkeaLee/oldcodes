#include <stdio.h>
#include <math.h>
int qiuhe(int number);

int main(void)
{
	int m = 0;
	int i = 0;


	for(i = 100;i<=999;i++)
	{
		m = qiuhe(i);
		if(m==i)
		{
			printf("%d\n\n",m); 
		}
	}
	return 0;
}
int qiuhe(int number)
{
	int num = 0;
	while(number!=0)
	{
		num+=(int)pow(number%10,3);
		number/=10;
	}
	return num;
}