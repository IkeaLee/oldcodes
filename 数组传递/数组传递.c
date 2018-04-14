#include <stdio.h>
int suzhu(int b[],int n);
int main(void)
{
	int s[5]={2,4,6,8,10};
	suzhu(s,5);
	return 0;
}
int suzhu(int b[],int n)
{
	int i;
	for(i = 0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	return b[n];
}