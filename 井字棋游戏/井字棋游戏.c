#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
	int choice = 0;
	char game[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int i = 0;
	int j = 0;
	int player = 0;
	int h = 0;
	int w = 0;
	int winner = 0;
	for(i = 0;i<9;i++)
	{
		player = i%2+1;
		system("cls");
		printf("+-----+-----+-----+\n");
		printf("|  %c  |  %c  |  %c  |\n",game[0][0],game[0][1],game[0][2]);
		printf("+-----+-----+-----+\n");
		printf("|  %c  |  %c  |  %c  |\n",game[1][0],game[1][1],game[1][2]);
		printf("+-----+-----+-----+\n");
		printf("|  %c  |  %c  |  %c  |\n",game[2][0],game[2][1],game[2][2]);
		printf("+-----+-----+-----+\n");
		printf("请玩家%d游戏，请将你的%c放在方格中\n",player,(player==1)?'X':'0');
	
			scanf("%d",&choice);
			if(choice>=1&&choice<=9)
			{
				break;
			}
			else
			{
				printf("不要越界，选择1-9之间的数，请重新输入");
			}
		
		h = --choice/3;
		w = choice%3;
		game[h][w]=(player==1)?'X':'0';	
		if(game[0][0]==game[1][1]&&game[0][0]==game[2][2]||game[0][2]==game[1][1]&&game[0][2]==game[2][0])
		{
			winner=player;break;
		}
		else
		{
			for(j=0;j<=2;j++)
			{
				if(game[j][0]==game[j][1]&&game[j][0]==game[j][2]||game[0][j]==game[1][j]&&game[0][j]==game[2][j])
				{
					winner=player;
					break;
				}
			}
		}
		while(winner!=0)
		{
			break;
		}
		if(i==9)
		{
			system("pause");
		}
	}
	system("cls");
	printf("+-----+-----+-----+\n");
	printf("|  %c  |  %c  |  %c  |\n",game[0][0],game[0][1],game[0][2]);
	printf("+-----+-----+-----+\n");
	printf("|  %c  |  %c  |  %c  |\n",game[1][0],game[1][1],game[1][2]);
	printf("+-----+-----+-----+\n");
	printf("|  %c  |  %c  |  %c  |\n",game[2][0],game[2][1],game[2][2]);
	printf("+-----+-----+-----+\n");
	if(winner!=0)
	{
		printf("玩家%d获胜\n",winner);
	}
	else
	{
		printf("你们打了个平手\n");
	}
	system("pause");
	return 0;
}