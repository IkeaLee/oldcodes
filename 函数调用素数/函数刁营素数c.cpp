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
	printf("������ʼ����������");
	scanf("%d%d",&n1,&n2);
	dis1(n1,n2);
	return 0;
}
int shuru2(void)
{
	int n3,n4;
	printf("������ʼ�������ٸ������ĺ�");
	scanf("%d%d",&n3,&n4);
	dis2(n3,n4);
	return 0;
}
int dis1(int n1,int n2)
{
	int i = 0;
	int num = 0;
	int temp = 0;
	//��100��200֮���ж�������
	for(i=n1;i<=n2;i++)
	{
		int num = sushu(i);
		if(num)
		{
			++temp;
			printf("%d������\n",num);
		}
	}
	printf("%d��%d֮��һ����%d������\n\n",n1,n2,temp);
	return 0;
}
int dis2(int n3,int n4)
{
	int j = 0;
	int sum = 0;
	int num3 = 0;
	//��100����35�������ĺ�
	while(j<=n4)
	{
		num3 = sushu(n3++);
		if(num3)
		{
			sum+=num3;
			++j;
		}	
	}
	printf("100����35�������ĺ��� %d\n\n",sum);
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