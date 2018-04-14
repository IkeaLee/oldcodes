#include <stdio.h>
#include <malloc.h>
int number(int *a,int b,int num);
int main(void)
{
	int *a = NULL;
	int *b = NULL;
	int m = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int temp = 0;
	scanf("%d",&m);
	a = (int *)malloc(m*sizeof(int));
	for(i = 0;i<m;i++)
	{
		scanf("%d",a+i);
	}
		scanf("%d",&n);
	b = (int *)malloc(n*sizeof(int));
	for(i = 0;i<n;i++)
	{
		scanf("%d",b+i);
	}

	for(i = 0;i<n;i++)
	{
		temp = number(a,b[i],m);
		if(temp!=0)
		{
			printf("%d\n",temp);
		}
		 if(temp == 0)
		{
			printf("Not found!\n");
		}
	}
	free(a);
	a = NULL;
	free(b);
	b = NULL;
	return 0;
}

int number(int *a, int b,int num)
{
	int m = 0;
	int n = num-1;
	int mid = (m+n)/2;
	while(m<n&&a[mid]!=b)
	{
		 if(a[mid]<b)
		{
			m = mid+1;
		}
		else if(a[mid]>b)
		{
			n = mid-1;
		}
		mid = (m+n)/2;
		
	}
	if(a[mid]==b)
	{
		return mid;
	}
	else
	{
		return 0;
	}
	
}
