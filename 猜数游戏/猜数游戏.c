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
		printf("输入你要猜的数字咯 ");
		printf("第%d次猜",i);
		scanf("%d",&guess);
		if(guess==choose)
		{
			printf("恭喜你，一下子就猜对了\n");

		}
		if(guess<1||guess>9)
		{
			printf("抱歉,提示一下，答案在1到9之间，不要越界\n");
		}
		else 
		{
			printf("猜错咯\n");
		}
	}
	printf("5次机会已经用光，请重新来过\n");
}