#include<stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int a[50][50];
	int num = 0;
	printf("请输入杨辉三角形的行数:  ");
	scanf("%d",&num);
	for(i = 0;i<num;i++)
	{
		for(j = i;j<=i;j++)
		{
			a[i][j]=1;
		}
	}
		for(i = 0;i<num;i++)
	{
		for(j = 0;j<=0;j++)
		{
			a[i][j]=1;
		}
	}
		for(i = 2;i<num;i++)
		{
			for(j =1;j<i;j++)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}

		for(i = 0;i<num;i++)
	{
		for(j = 0;j<=i;j++)
		{
			printf("  %4d",a[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
