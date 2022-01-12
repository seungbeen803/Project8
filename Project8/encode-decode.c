#include<stdio.h>

//암호화 시키는 함수
void encode(char ch[], int size) //size = 3
{
	//korea : k+2, o+3, r+3, e+3, a+3
	int i = 0;
	printf("문자열 입력 : ");
	scanf("%s", ch);
	while (ch[i] != '\0')
	{
		ch[i] += size;
		i++;
	}
	printf("암호화 된 문자열 %s \n", ch);
}

//복호화 시키는 함수
void decode(char ch[], int size)
{
	int i = 0;
	while (ch[i] != '\0')
	{
		ch[i] -= size;
		i++; //다음문자
	}
	printf("복호화 된 문자열 %s \n", ch);
}
int main(void)
{
	char msg[50];
	int size = 900;
	int choice;
	while (1)
	{
		printf("1. 암호 2. 복호 3. 종료\n");
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