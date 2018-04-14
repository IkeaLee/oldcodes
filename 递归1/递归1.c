#include <stdio.h>
void a();
void b();
void c();
void d();
void a()
{
printf("AAAAA\n");
b();
printf("11111\n");
}
void b()
{
	printf("BBBBB\n");
	c();
	printf("22222\n");
}
void c()
{
printf("CCCCC\n");
d();
printf("33333\n");
}
void d()
{
printf("DDDDD\n");
printf("44444\n");
}
int main(void)
{
	a();
		return 0;
}