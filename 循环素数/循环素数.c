#include <stdio.h>
#include <math.h>
int number(int num);
int main(void)
{
	int num = 0;
	int s[100];
	int num1;
	int num2;
	int num3;
	int num4;
	int i = 0;
	int max;
	int a,b,c,d,e;
	for(i = 10001;i<=99999;i+=2)
	{
		num1 = (i%10)*10000+i/10;
		num2 = (num1%10)*10000+num1/10;
		num3 = (num2%10)*10000+num2/10;
		num4 = (num3%10)*10000+num3/10;
		a=number(i);
		b=number(num1);
		c=number(num2);
		d=number(num3);
		e=number(num4);
		if(a)
		{
			if(b)
			{
				if(c)
				{
					if(d)
					{
						if(e)
						{
							s[num++]=i;
						}
					}
				}
			}
		}
	}
	max = s[0];
	for(i = 0; i<num;i++)
	{
		if(max<s[i])
		{
			max = s[i];
		}
	}
	printf("%8d\n",max);
	return 0;
}
int number(int num)
{
	int i;
	int k;
	k=sqrt(num);
	for(i = 2;i<=k;i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(i>k)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}