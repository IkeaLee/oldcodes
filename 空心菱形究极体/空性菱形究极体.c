#include <stdio.h>
#define N 12 //N��ֵ�������εı߳�
int main(void)
{ 
	int i;
	for(i=N+1;i>1;i--,printf("%*s%s%*s%s\n",i," ","*",(N-i)*2-1," ",i+2==N+2?" ":"*")); 
	for(i=1; i<N; i++,printf("%*s%s%*s%s\n",i," ","*",(N-i)*2-1," ",i+2==N+2?" ":"*"));
}