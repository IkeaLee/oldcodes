#include <stdio.h>
void test(int b[2]);
int main(void)
{
	int a[5]={2,4,6,8,10};

	printf("%p\n",a);
		test(a);
	
	return 0;
}
void test(int b[2])
{
	int i;
	printf("%p\n",b);
	for(i = 0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}