#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,k,m;
	
	for(m=1;m<=1000;m++)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
		{
			if(m%i==0)
			{
				break;
			}
		}
		if(i>k)
		{
			printf("%d������\n",m);
		}
		else 
		{
			printf("%d��������\n",m);
		}
	}
}