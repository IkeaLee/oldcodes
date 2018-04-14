#include <stdio.h>
#include <malloc.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	int *a = NULL;
	int *b = NULL;
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	for(i = 0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%d",&m);
	b = (int*)malloc(m*sizeof(int));
	for(j = 0;j<m;j++)
	{
		scanf("%d",b+j);
	}
	for(i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			if(*(a+j)==*(b+i))
			{
				printf("%d\n",j);
				break;
			}
			else if(j==n-1)
			{
				if(*(a+j)!=*(b+i))
				{
					printf("Not found!\n");
				}
			}
		}
	}
	free(a);	
	free(b);
	a = NULL;
	b = NULL;
	return 0;
}
