#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int choose=0;
	int i;
	int guess=0;
	srand(time(NULL));
	choose=1+rand()%9;
	printf("choose=%d\n",choose);
	for(i=1;i<=5;i++)
	{
		printf("������Ҫ�µ����ֿ� ");
		printf("��%d�β�",i);
		scanf("%d",&guess);
		if(guess==choose)
		{
			printf("��ϲ�㣬һ���ӾͲ¶���\n");

		}
		if(guess<1||guess>9)
		{
			printf("��Ǹ,��ʾһ�£�����1��9֮�䣬��ҪԽ��\n");
		}
		else 
		{
			printf("�´�\n");
		}
	}
	printf("5�λ����Ѿ��ù⣬����������\n");
}