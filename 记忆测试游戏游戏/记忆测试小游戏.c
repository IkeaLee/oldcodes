#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#define TIME 2*CLOCKS_PER_SEC         //延迟时间显示 参数1可以修改 单位是秒
int main(void)
{
	char continue_game = 'Y';         //控制输掉游戏后 结束游戏 还是继续游戏
	int i;                            //循环
	int n = 0;
	int digts = 0;                    //控制游戏难度 循环内才能实现修改 
	int tries = 0;                    //记录成功次数 超过3次成功 就增大游戏难度 通过改变digts的值来实现难易度的增加
	int sorce = 0;                    //计入玩家得分值
	int number = 0;                   //玩家输入记忆的数字 记录在number变量中
	int correct = 1 ;                 //用于while循环中  初始值为1死循环  终止循环在循环着自行用if赋值为0结束循环
	clock_t start = 0;
	time_t wait_start = 0;           //time_t 是数值类型定义  wait_start是用户标识符
	//计入等待时间的值，返回给这个变量。
    time_t seed = 0;                 //时间种子 记录time()函数生成的值 储存在seed用户标识符中，time_t是该数值类型的定义 
	printf("");
	do
	{
		
		digts = 4;
		start = clock();
		while(correct)
		{
			srand(time(&seed));         //用于循环内  记录rand()函数生成的随机值  但是取seed的地址 是 用于猜数字时 猜的是原来生成的数 而不是新的种子值
			++tries;
			wait_start = clock();
			printf("给你1秒记忆这些数字\n");
			for(i=1;i<=digts;++i)
			{
				printf("%d ",rand()%10);
			}
			for(;clock()-wait_start<TIME;);
			printf("\r");
			for(i=1;i<=digts+digts;++i)
			{
				printf(" ");
			}
			
			if(tries == 1)
			{
				printf("不要放弃啊\n");
			}
			else
			{
				printf("\r");
			}
			srand(seed);
			printf("写出你记忆的数字\n");
			for(i=1;i<=digts;++i)
			{
				scanf("%d",&number);
				if(number!=rand()%10)
				{
					correct = 0;
					break;
				}
			}
			if((tries%3)==0&&correct)
			{
				++digts;
			}
		}
		fflush(stdin);
		printf("你是否想继续挑战游戏？(y/n)?   ");
		scanf("%c",&continue_game);
	}
	while(toupper(continue_game)=='Y');
	return 0;
}