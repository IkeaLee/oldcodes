#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void moves(sys[][26]);
void picture(char sys[][26],int size);
void str();
void choose();
void text();
void aticle();
void exit1();
int main(void)
{
	
	int choice = 0;
	choose();
	printf("请选择");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:text();break;   //游戏代码设计思路
	case 2:str();break;    //设置棋盘大小
	case 3:aticle();break; //作者信息
	case 4:exit1();break;   //退出程序
	}
	return 0;
}
void choose()
{
	printf("* * * * * * * * * * * * * * * * * * * *\n");
	printf("*           1: 代 码 步 骤            *\n");
	printf("*           2: 开 始 游 戏            *\n");
	printf("*           3: 关 于 作 者            *\n");
	printf("*           4: 退 出 程 序            *\n");
	printf("* * * * * * * * * * * * * * * * * * * *\n");
}
void text()
{
	printf("   黑白棋设计思路\n");
	printf("1: 先画图 绘出棋盘界面\n");
	printf("2: 在棋盘中间4个方格事先布局4颗旗子\n");
	printf("3: 设置玩家现行还是电脑现行\n");
	printf("4: 确保选择过的方格 不许再次选择");
	printf("5: 设置电脑行走方案\n");
	printf("按任意键回主菜单\n");
	system("pause");
	main();
}
void aticle()
{
	printf("\a\n\a\n\n\n\n");
	printf("欢迎加入C语言交流群：   群号     322085520   \n\n\n\n\a\a\n");
	printf("按任意键回主菜单\n");
	system("pause");
	main();
}
void exit1()
{
	printf("你确定要退出程序吗？");
	system("pause");
	exit(0);
}
void str()  //绘图
{
	int i;
	int j;
	char sys[26][26] ={0};
	int size = 0;
	int mid = 0;
	
	while(1)
	{
		system("cls");
		printf("输入绘制图的大小");
		scanf("%d",&size);
		if(size<6)
		{
			printf("抱歉 ，你绘制的图太小，请重新");
		}
		if(size>26)
		{
			printf("抱歉，你绘制的图太大，请重新");
		}
		if(size>=6&&size<=26)
		{
			for(i = 0;i<size;i++)
			{
				for(j = 0;j<size;j++)
				{
					sys[i][j] =' ';
				}
			}
			printf("绘图成功：正在为你生成视图：\n生成成功！\n");
			mid = size/2;
			sys[mid-1][mid-1]='@';
			sys[mid][mid]='@';
			sys[mid][mid-1]='0';
			sys[mid-1][mid]='0';
			break;
		}
	}
	picture(sys,size);
}
void picture(char sys[][26],int size) //生成绘图
{
	int row = 0 ;
	char col = 'a' ;
	int n = 0;
	int i,j;
	int temp = 0;
	int t = 0;
	int p = 1;
	int m = 0;
	int  player = 0;
	char play = 0;
	int x;
	char y;
	int a;
	int b;
	int play1;
	int temp1 = 0;
	int c = 0;
	while(p)
	{
		system("cls");
		for(i = 1;i<=size;i++)
		{
			n = 0;
			if(i == 1)
			{
				printf("  ");
				for(j = 1;j<size*4+1;j++)
				{
					if(j%4==0)
					{
						printf("%c",col+n);
						++n;
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			printf("   +");
			for(j = 1;j<=size;j++)
			{
				printf("---+");
			}
			printf("\n");
			
			for(j = 0;j<1;j++)
			{
				if(i <10)
				{
					printf("%d  ",row+i-1);
				}
				else if(i>=10)
				{
					printf("%d ",row+i-1);
				}
			}
			for(j =0;j<size;j++)
			{
				
				printf("| %c ",sys[i-1][j]);
				
			}
			printf("|\n");	
			
		}
		for(i = 1;i<=1;i++)
		{
			printf("   +");
			for(j = 1;j<=size;j++)
			{
				printf("---+");
			}
		}

		//确立玩家1玩家2选择步骤
		++m;
		if((m+1)%2 == 0)
		{
			player = 1;
			play = '@';
			play1 = '0';
		}
		else 
		{
			player = 2;
			play = '0';
			play1 = '@';
		}
		printf("\n请玩家 %d  选择 你的棋子 %c 放置在那个方格中 ",player,play);
		while(1)
		{
			scanf("%d%c",&x,&y);
			y = (int )y - 'a';
			if(sys[x][y]==' ')
			{
				sys[x][y] = play;
				break;
			}
			else
			{
				printf("方格已经被选中，请重新选择\n");
			}
		}

	

		//消灭一行被夹击的棋

	}
	
	printf("\n");
}