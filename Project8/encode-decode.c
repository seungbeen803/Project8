#include<stdio.h>

//��ȣȭ ��Ű�� �Լ�
void encode(char ch[], int size) //size = 3
{
	//korea : k+2, o+3, r+3, e+3, a+3
	int i = 0;
	printf("���ڿ� �Է� : ");
	scanf("%s", ch);
	while (ch[i] != '\0')
	{
		ch[i] += size;
		i++;
	}
	printf("��ȣȭ �� ���ڿ� %s \n", ch);
}

//��ȣȭ ��Ű�� �Լ�
void decode(char ch[], int size)
{
	int i = 0;
	while (ch[i] != '\0')
	{
		ch[i] -= size;
		i++; //��������
	}
	printf("��ȣȭ �� ���ڿ� %s \n", ch);
}
int main(void)
{
	char msg[50];
	int size = 900;
	int choice;
	while (1)
	{
		printf("1. ��ȣ 2. ��ȣ 3. ����\n");
		scanf("%d", &choice);
		if (choice == 1)
			encode(msg, size);
		else if (choice == 2)
		{
			decode(msg, size);
		}
		else if (choice == 3) exit(1);
	}
	encode(msg, size);
	system("pause");
}