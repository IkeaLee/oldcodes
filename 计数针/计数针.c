#include<stdio.h>
#include <malloc.h>
#include <string.h>
int main(void)
{
	int i;
	int num;
	int temp = 0;
	double temp1 = 0;
	double temp2 = 0;
	char *a = NULL;
	char *b = NULL;
	double *c = NULL;
	double *d = NULL;
	a = (char*)malloc(1024);
	b = (char*)malloc(1024);
	c = (double*)calloc(1024,4);
	d = (double*)calloc(1024,4);
	gets(a);
	gets(b);
	num = strlen(a)-strlen(b);
	for(i = 0;i<strlen(a);i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		{
			*(c+i) = *(a+i)+31.5;
		}
		else
		{
			*(c+i) = *(a+i);
		}
	}
	for(i = 0;i<strlen(b);i++)
	{
		if(b[i]<='Z'&&b[i]>='A')
		{
			*(d+i) = *(b+i)+31.5;
		}
		else
		{
			*(d+i) = *(b+i);
		}
	}
	if(num==0)
	{
		for(i = 0;i<strlen(a);i++)
		{
			if(c[i]<d[i])
			{
				temp = 1;
				break;
			}
			else if(c[i]<=d[i])
			{
				temp = 0;
				break;
			}
		}
		if(temp == 1)
		{
			printf("YES\n");
		}
		else if(temp == 0)
		{
			printf("NO\n");
		}
	}
	
	if(num<0)
	{
		for(i = 0;i<strlen(a);i++)
		{
			temp1+=c[i];
			temp2+=d[i];
		}
		if(temp1==temp2)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	if(num>0)
	{
		for(i = 0;i<strlen(b);i++)
		{
			temp1+=c[i];
			temp2+=d[i];
		}
		if(temp1==temp2)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	free(a);
	free(b);
	free(c);
	free(d);
	return 0;
}
