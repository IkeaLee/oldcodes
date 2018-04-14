#include<stdio.h>
#include <string.h>
int main(void)
{
	char s1[100];
	char s2[100];
	int s[100];
	int temp = 0;
	int temp1=0;
	int temp2 = 0;
	int m;
	int n;
	int i;
	int k = 1;
	gets(s1);
	gets(s2);
	m = strlen(s1);
	temp1 = m;
	n = strlen(s2);
	temp2 =n;
	if(m>n)
	{
		for(i = n-1;i>=0;i--)
		{
			s2[m-1] = s2[i];
			--m;
		}
		for(i = 0;i<temp1-temp2;i++)
		{
			s2[i]='0';
		}
		for(i = temp1-1;i>=0;i--)
		{
			s[i+1]=((int)((s1[i]-48)+(int)(s2[i]-48))+temp)%10;
			temp = ((int)((s1[i]-48)+(int)(s2[i]-48))+temp)%100/10;
		}
		if((int)((s1[temp1-temp2]-48)+(int)(s2[temp1-temp2]-48)+temp)%100/10>0)
		{
			s[0]=1;
			k = 0;
		}
		else
		{
			k=1;
		}
		for(i = k;i<=temp1;i++)
		{
			printf("%d",s[i]);
		}
		printf("\n");
		
	}		
	else if(m<n)
	{
		for(i = m-1;i>=0;i--)
		{
			s1[n-1] = s1[i];
			--n;
		}
		for(i = 0;i<temp2-temp1;i++)
		{
			s1[i]='0';
		}
		
		for(i = temp2-1;i>=0;i--)
		{
			s[i+1]=((int)((s1[i]-48)+(int)(s2[i]-48))+temp)%10;
			temp = ((int)(s1[i]-48)+(int)(s2[i]-48)+temp)%100/10;
		}
		if((int)((s1[temp2-temp1]-48)+(int)(s2[temp2-temp1]-48)+temp)%100/10>0)
		{
			s[0]=1;
			k = 0;
		}
		else
		{
			k=1;
		}
		for(i = k;i<=temp2;i++)
		{
			printf("%d",s[i]);
		}
	}
	else if(m==n)
	{
		for(i = temp2-1;i>=0;i--)
		{
			s[i+1]=((int)((s1[i]-48)+(int)(s2[i]-48))+temp)%10;
			temp = ((int)(s1[i]-48)+(int)(s2[i]-48)+temp)%100/10;
		}
		if((int)((s1[0]-48)+(int)(s2[0]-48)+temp)%100/10>0)
		{
			s[0]=1;
			k = 0;
		}
		else
		{
			k=1;
		}
		for(i = k;i<=temp2;i++)
		{
			printf("%d",s[i]);
		}
	}
	return 0;
}