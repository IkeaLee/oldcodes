#include <stdio.h>
#include <stdlib.h>
int pow(int a,int b);
int main(void)
{
	int res = pow(2,3);
	printf("%d\n",res);
	system("pause");

	return 0;
}
int pow(int a,int b)
{
	int tres = 1;
	while(b--)
	{
		tres*=a;
	}
	return tres;
}