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
	printf("��д��ĸ��%d\n Сд��ĸ�� %d \n �Ʊ���ǣ�  %d\n �س��ǣ�  %d\n �ո��ǣ� %d\n",a,e,b,c,d);
	return 0;

}
