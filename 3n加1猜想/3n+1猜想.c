#include <stdio.h>
#include <string.h>
int main(void)
{
	char n[1000];                        //存放用户输入字符
	int num[16];                         //记录用户输入数字的和后分离出的各个位数
	int number = 0;                      //迭代num的下标
	int i = 0;                           //控制循环
	int temp = 0;                        //临时记录被分离的和的各个位数
	int sum = 0;                         //求所有字符转化为数字的和
	gets(n);
	for(i = 0;i<strlen(n);i++)           //将输入的字符 转为数字 并且想加求出和
	{
		sum+=n[i]-48;
	}
	if(sum == 0)
	{
		printf("ling\n");
	}
	while(sum!=0)                       //将求出的和的各个位数分离 ，并且记录在数组num中。
	{
		temp=sum%10;
		num[number]=temp;
		sum=sum/10;
		++number;
	}
	for(i=number-1;i>=0;i--)           //num中的数值是分离sum值的逆序，所以正序输出num。
	{
		switch(num[i])
		{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
		}
		if(i!=0)                     //设置数值之间的距离
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}