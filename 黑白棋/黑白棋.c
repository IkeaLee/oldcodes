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
	printf("��ѡ��");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:text();break;   //��Ϸ�������˼·
	case 2:str();break;    //�������̴�С
	case 3:aticle();break; //������Ϣ
	case 4:exit1();break;   //�˳�����
	}
	return 0;
}
void choose()
{
	printf("* * * * * * * * * * * * * * * * * * * *\n");
	printf("*           1: �� �� �� ��            *\n");
	printf("*           2: �� ʼ �� Ϸ            *\n");
	printf("*           3: �� �� �� ��            *\n");
	printf("*           4: �� �� �� ��            *\n");
	printf("* * * * * * * * * * * * * * * * * * * *\n");
}
void text()
{
	printf("   �ڰ������˼·\n");
	printf("1: �Ȼ�ͼ ������̽���\n");
	printf("2: �������м�4���������Ȳ���4������\n");
	printf("3: ����������л��ǵ�������\n");
	printf("4: ȷ��ѡ����ķ��� �����ٴ�ѡ��");
	printf("5: ���õ������߷���\n");
	printf("������������˵�\n");
	system("pause");
	main();
}
void aticle()
{
	printf("\a\n\a\n\n\n\n");
	printf("��ӭ����C���Խ���Ⱥ��   Ⱥ��     322085520   \n\n\n\n\a\a\n");
	printf("������������˵�\n");
	system("pause");
	main();
}
void exit1()
{
	printf("��ȷ��Ҫ�˳�������");
	system("pause");
	exit(0);
}
void str()  //��ͼ
{
	int i;
	int j;
	char sys[26][26] ={0};
	int size = 0;
	int mid = 0;
	
	while(1)
	{
		system("cls");
		printf("�������ͼ�Ĵ�С");
		scanf("%d",&size);
		if(size<6)
		{
			printf("��Ǹ ������Ƶ�ͼ̫С��������");
		}
		if(size>26)
		{
			printf("��Ǹ������Ƶ�ͼ̫��������");
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
			printf("��ͼ�ɹ�������Ϊ��������ͼ��\n���ɳɹ���\n");
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
void picture(char sys[][26],int size) //���ɻ�ͼ
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

		//ȷ�����1���2ѡ����
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
		printf("\n����� %d  ѡ�� ������� %c �������Ǹ������� ",player,play);
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
				printf("�����Ѿ���ѡ�У�������ѡ��\n");
			}
		}

	

		//����һ�б��л�����

	}
	
	printf("\n");
}