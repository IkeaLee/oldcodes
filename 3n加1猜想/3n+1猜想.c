#include <stdio.h>
#include <string.h>
int main(void)
{
	char n[1000];                        //����û������ַ�
	int num[16];                         //��¼�û��������ֵĺͺ������ĸ���λ��
	int number = 0;                      //����num���±�
	int i = 0;                           //����ѭ��
	int temp = 0;                        //��ʱ��¼������ĺ͵ĸ���λ��
	int sum = 0;                         //�������ַ�ת��Ϊ���ֵĺ�
	gets(n);
	for(i = 0;i<strlen(n);i++)           //��������ַ� תΪ���� ������������
	{
		sum+=n[i]-48;
	}
	if(sum == 0)
	{
		printf("ling\n");
	}
	while(sum!=0)                       //������ĺ͵ĸ���λ������ �����Ҽ�¼������num�С�
	{
		temp=sum%10;
		num[number]=temp;
		sum=sum/10;
		++number;
	}
	for(i=number-1;i>=0;i--)           //num�е���ֵ�Ƿ���sumֵ�����������������num��
	{
		switch(num[i])
		{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
		}
		if(i!=0)                     //������ֵ֮��ľ���
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}