#include <stdio.h>  

int main(void)
{
	int i = 0, n = 0;
	int f1 = 1, f2 = 1;
	scanf("%d", &n);
	for (i = 3; i <= n; i ++) 
	{
		f1 = f1 + f2;
		f2 = f1 + f2;
		if (f2 >= 10007) 
		{
			f1 %= 10007;
			f2 %= 10007;
		}
	}
	if (0 != n % 2) 
		printf("%d\n", f1);
	else
		printf("%d\n", f2);
	return 0;
}