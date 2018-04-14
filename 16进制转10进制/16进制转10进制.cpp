#include<stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	char a[20];//ต๗สิ
	int i = 0;
	int n = 0;
	double sum = 0.0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]<='9'&&a[i]>='0')
		{
			a[i]=a[i]-48;
		}
		if(a[i]>='A'&&a[i]<='F')
		{
			a[i]=a[i]-55;
		}
		sum+=a[i]*pow(16,n-i-1);
	}
				printf("%10.0lf\n",sum);
	return 0;
}