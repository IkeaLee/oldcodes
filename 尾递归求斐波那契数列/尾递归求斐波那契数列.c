#include<stdio.h>
int number(int num,int n1,int n2);
int main(void)
{
	int num;
	int n1 = 1;
	int n2 = 1;
	int sum = 0;
	printf("����Ҫ��쳲��������е�ǰ����� �� ");
	scanf("%d",&num);
	sum = number(num,n1,n2);
	printf("ǰ %d ��ĺ��� ��%d \n",num,sum);
	return 0;
}
int number(int num,int n1,int n2)
{
	if(num<2)
	{
		return n1;
	}
	else
	{
		return number(num-1,n2,n1+n2);
	}
}