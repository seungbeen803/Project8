#include<stdio.h>
#include<math.h>

struct point //Ŭ����
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2; //p�� ��ü

	double xdiff, ydiff;
	double distance;

	printf("ù ��° ���� ��ǥ �Է� : ");
	scanf("%d,%d", &p1.x, &p1.y); //0,0
	printf("�� ��° ���� ��ǥ �Է� : ");
	scanf("%d,%d", &p2.x, &p2.y); //1,1

	xdiff = (p1.x - p2.x);
	ydiff = (p1.y - p2.y);
	distance = sqrt((xdiff * xdiff) + (ydiff * ydiff));
	printf("�� �� ������ �Ÿ��� %4.2f\n", distance);
	system("pause");
}