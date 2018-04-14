#include <stdio.h>
#include <math.h>
int sushu(int number);
int dis1(int n1,int n2);
int dis2(int n3,int n4);
int shuru1(void);
int shuru2(void);
int main(void)
{
	while(1)
	{
		shuru1();
		shuru2();
	}
	return 0;
}
int shuru1(void)
{
	int n1,n2;
	printf("输入起始到结束的数");
	scanf("%d%d",&n1,&n2);
	dis1(n1,n2);
	return 0;
}
int shuru2(void)
{
	int n3,n4;
	printf("输入起始，到多少个素数的和");
	scanf("%d%d",&n3,&n4);
	dis2(n3,n4);
	return 0;
}
int dis1(int n1,int n2)
{
	int i = 0;
	int num = 0;
	int temp = 0;
	//求100到200之间有多少素数
	for(i=n1;i<=n2;i++)
	{
		int num = sushu(i);
		if(num)
		{
			++temp;
			printf("%d是素数\n",num);
		}
	}
	printf("%d到%d之间一共有%d个素数\n\n",n1,n2,temp);
	return 0;
}
int dis2(int n3,int n4)
{
	int j = 0;
	int sum = 0;
	int num3 = 0;
	//求100以上35个素数的和
	while(j<=n4)
	{
		num3 = sushu(n3++);
		if(num3)
		{
			sum+=num3;
			++j;
		}	
	}
	printf("100以上35个素数的和是 %d\n\n",sum);
	return 0;
}
int sushu(int number)
{
	int n = 0;
	int m = sqrt(number);
	
	for(n=2;n<=m;n++)
	{
		if(number%n==0)
		{
			break;
		}
	}
	if(n>m)
	{
		return number;
	}
	else 
	{
		return 0;
	}
}