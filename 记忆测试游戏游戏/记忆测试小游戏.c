#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#define TIME 2*CLOCKS_PER_SEC         //�ӳ�ʱ����ʾ ����1�����޸� ��λ����
int main(void)
{
	char continue_game = 'Y';         //���������Ϸ�� ������Ϸ ���Ǽ�����Ϸ
	int i;                            //ѭ��
	int n = 0;
	int digts = 0;                    //������Ϸ�Ѷ� ѭ���ڲ���ʵ���޸� 
	int tries = 0;                    //��¼�ɹ����� ����3�γɹ� ��������Ϸ�Ѷ� ͨ���ı�digts��ֵ��ʵ�����׶ȵ�����
	int sorce = 0;                    //������ҵ÷�ֵ
	int number = 0;                   //��������������� ��¼��number������
	int correct = 1 ;                 //����whileѭ����  ��ʼֵΪ1��ѭ��  ��ֹѭ����ѭ����������if��ֵΪ0����ѭ��
	clock_t start = 0;
	time_t wait_start = 0;           //time_t ����ֵ���Ͷ���  wait_start���û���ʶ��
	//����ȴ�ʱ���ֵ�����ظ����������
    time_t seed = 0;                 //ʱ������ ��¼time()�������ɵ�ֵ ������seed�û���ʶ���У�time_t�Ǹ���ֵ���͵Ķ��� 
	printf("");
	do
	{
		
		digts = 4;
		start = clock();
		while(correct)
		{
			srand(time(&seed));         //����ѭ����  ��¼rand()�������ɵ����ֵ  ����ȡseed�ĵ�ַ �� ���ڲ�����ʱ �µ���ԭ�����ɵ��� �������µ�����ֵ
			++tries;
			wait_start = clock();
			printf("����1�������Щ����\n");
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
				printf("��Ҫ������\n");
			}
			else
			{
				printf("\r");
			}
			srand(seed);
			printf("д������������\n");
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
		printf("���Ƿ��������ս��Ϸ��(y/n)?   ");
		scanf("%c",&continue_game);
	}
	while(toupper(continue_game)=='Y');
	return 0;
}