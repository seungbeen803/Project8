#include<stdio.h>
#include<string.h>
void main(void)
{
	char ch1[20];
	char ch2[20];

	printf("ù��° ���ڿ� �Է� : ");
	//scanf("%s", ch1);
	gets(ch1);
	printf("�� ��° ���ڿ� �Է� : ");
	//scanf("%s", ch2);
	gets(ch2);

	if (strcmp(ch1, ch2) == 0)
		printf("�Է¹��� �� ���ڴ� �����ϴ�.\n");
	else printf("�Է¹��� �� ���ڴ� ��ġ���� �ʽ��ϴ�.\n");

	system("pause");
}