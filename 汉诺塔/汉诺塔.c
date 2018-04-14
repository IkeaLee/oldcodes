#include <stdio.h>
void digui(int num ,char one ,char two,char three);
void move(char x,char y);
int main(void)
{
	int m;
	printf("请输入汉诺塔的盘子数是多少个： ");
	scanf("%d",&m);	
	digui(m,'A','B','C');
	return 0;
}
void digui(int num ,char one ,char two,char three)
{
	
	if(num==1)
	{
		move(one,three);
	}
	else 
	{
		digui(num-1,one,three,two);
		move(one,three);
		digui(num-1,two,one,three);
	}
}
void move(char x,char y)
{
	printf("%c --> %c\n",x,y);
}
