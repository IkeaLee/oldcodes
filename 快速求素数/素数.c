#include <stdio.h>
#include <math.h>

__int64 is_prime(__int64 n, __int64 a[]);

int main(void)
{   
	__int64 i ;
	__int64 prime_list[100000] = {2};
	int k = 1;
	int n=0;
	
	printf("2 ");
	
	for (i= 3; i <=200000; i+= 2)  
	{
		if (is_prime(i, prime_list)) 
		{
			++n;
			prime_list[k++] = i;
			if(n%10==0)
			{
				printf(" \n");
			}
			printf("%lld ", i);
		}
	
	}
		printf("\n  %d  ¸öËØÊý\n",n);
	
	return 0;
}

__int64 is_prime(__int64 n, __int64 a[])
{
	__int64 i;
    __int64 result = 1;
    for (i = 0; a[i] * a[i] <= n; i++)
        if (n % a[i] == 0)
		{
            result = 0;
            break;
        }
		return result;
}