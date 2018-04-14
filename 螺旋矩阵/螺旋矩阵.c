#include <stdio.h>
int main(void)
{
	int a[30][30];
	int i,j;
	int c = 0;
	int N;
	printf("请输入螺旋矩阵的长度:  ");
	scanf("%d",&N);
	if(N%2!=0)
	{
		a[N/2][N/2]=N*N;
	}
	for(i = 0;i<N/2;i++)
	{
		for(j = i;j<=N-i-1;j++)
		{
			a[i][j]= ++c;
		}
		for(j = i+1;j<=N-i-1;j++)
		{
			a[j][N-i-1]=++c;
		}
		for(j=N-i-2;j>=i;j--)
		{
			a[N-i-1][j]=++c;
		}
		for(j=N-i-2;j>=i+1;j--)
		{
			a[j][i]=++c;
		}
	}
	for(i = 0;i<N;i++)
	{
		for(j =0;j<N;j++)
		{
			printf(" %4d ",a[i][j]);
		}
		printf(" \n\n");
	}
	return 0;
}
