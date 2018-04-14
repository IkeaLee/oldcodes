#include <stdio.h>
int main(void)
{
	int a=0;
	double b=0.0,c=0.0;
	scanf("%d%lf",&a,&b);
	c=a/b;
	printf("%-120.1lf",c);
}
