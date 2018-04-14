#include <stdio.h>
void digui(int n);
int main(void)
{

	digui(45);
	return 0;
}

void digui(int n)
{
	if(n==1)
printf("¹þ¹þ\n");
else
{
	digui(n-1);
}
}