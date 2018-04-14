#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int k= 9;
	char s[3][4]={   
		{'a','b','c','y'},
		{'d','e','f','k'},
		{'g','h','i','l'},
				};
	while(i<sizeof(s)/sizeof(s[0]))
	{
		j = 0;
		while(j<sizeof(s[0]))
		{
			printf(" %c ",s[i][j]);
			++j;
		}
		if(j%sizeof(s[0])==0)
		{
			printf("\n\n");
		}
		++i;
	}
	printf("\n");
	i = 0;
	while(i<sizeof(s))
	{
		printf(" %c ",**s);
		++i;
		**s=*(*s+i);
		if(i%sizeof(s[0])==0)
		{
			printf("\n\n");
		}
		
	}
	
	return 0;
}
