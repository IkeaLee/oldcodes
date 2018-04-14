#include <stdio.h>
int main(void)
{
	int a,b,d,c,e;
	char t;
	a=b=d=c=e=0;
	while((t=getchar())!=EOF)
	{
		if(t<='Z'&&t>='A')
		{
				++a;
		}
		if(t=='\t')
		{
			++b;
		}
		if(t=='\n')
		{
			++c;
		}
		if(t==' ')
		{
			++d;
		}
				if(t<='z'&&t>='a')
		{
				++e;
		}
	}
	printf("大写字母：%d\n 小写字母： %d \n 制表符是：  %d\n 回车是：  %d\n 空格是： %d\n",a,e,b,c,d);
	return 0;

}
