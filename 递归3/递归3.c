#include <stdio.h>
int digui(int n);
int main(void)
{
	int num = digui(0);//µİ¹éÇó10µÄ½×³Ë
	printf("%d\n",num);
	return 0;
}
int digui(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else
	{
	return digui(n-1)*n;
	}
}