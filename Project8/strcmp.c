#include<stdio.h>
#include<string.h>
void main(void)
{
	char ch1[20];
	char ch2[20];

	printf("첫번째 문자열 입력 : ");
	//scanf("%s", ch1);
	gets(ch1);
	printf("두 번째 문자열 입력 : ");
	//scanf("%s", ch2);
	gets(ch2);

	if (strcmp(ch1, ch2) == 0)
		printf("입력받은 두 문자는 같습니다.\n");
	else printf("입력받은 두 문자는 일치하지 않습니다.\n");

	system("pause");
}