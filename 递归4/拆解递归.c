#include <stdio.h>
int d1(int n);
int d2(int n);
int d3(int n);
int d4(int n);
int d5(int n);
int main(void)
{
	int n=5;
	int u = 0;
	int k =5;
	int num = 0;
	num = d1(n,k);
	printf("num=%d\n",num);
	printf("u=%d\n",d5(u));
	printf("u=%d\n",d4(k));
	printf("u=%d\n",d3(k));
	printf("u=%d\n",d2(k));
	printf("u=%d\n",d1(k));
}
int d1(int n,int k)
{
	n*=d2(n-1);
	return n;
	k=k-1;
	return k;
}
int d2(int n,int k)
{
	n*=d3(n-1);
	return n;
	k=k-1;
	return k;
}
int d3(int n,int k)
{
	n*=d4(n-1);
	return n;
	k=k-1;
	return k;
}
int d4(int n,int k)
{
	n*=d5(n-1);
	return n;
	k=k-1;
	return k;
}
int d5(int n,int k)
{
	return 1;
	k=n-1;
	return k;       //1
}