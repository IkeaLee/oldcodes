#include <stdio.h>
#include <math.h>
int main(void)
{
	int num4 = 1;
	int num;
	int num2;
	int num3;
	int i;
	int temp;
	int temp1;
	int c = 0;
	int s[100];
	num = (int)(pow(7,10));
	num2 = num;
	num3 = num2%1000;
	for(i= 1;i<=10;i++)
	{
				if(i == 10)
		{
			temp = num4*249;
			while(temp!=0)
			{
				temp1 = temp%10;
				s[c++]=temp1;
				temp = temp/10;
			}
		}
		num4=(num3*num4)%1000;	

	}
	printf("pow(7,10000)的后三位是： ");
	for(i = 2;i>=0;i--)
	{
		printf("%d ",s[i]);
	}
	putchar('\n');
	return 0;
}