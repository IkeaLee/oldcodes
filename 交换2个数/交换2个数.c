#include <stdio.h>
int main(void)
{
	int a = 10 , b = 9 ;
	int i = 10 , j = 9 ;
	int h = 10 , k = 9 ;
	int t = 0 ;
	//���� a b ��ֵ
	t = a ;
	a = b;
	b = t;
	printf("  a = %d  b = %d \n " , a , b ) ;

	//���� i j ��ֵ
	i = i ^ j ;
	j = i ^ j ;
	i = i ^ j ;
	printf(" i = %d  j = %d \n" , i, j) ;

	//���� h k ��ֵ
	k = ( h + k ) - ( h = k );
	printf("  h = %d  k = %d  \n" , h , k ) ;
}