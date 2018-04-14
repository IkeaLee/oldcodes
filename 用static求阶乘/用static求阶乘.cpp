#include <stdio.h>
int jiecheng(int num);
int main(void)
{
	int i;
	int num;
	for(i = 1;i<=5;i++)
	{
		num = jiecheng(i);
	}
	printf("%d\n",num);
	return 0;
}
int jiecheng(int num)
{
	static fun  = 1;
	fun  = fun*num;
	return fun;
}