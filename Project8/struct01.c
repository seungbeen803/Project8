#include<stdio.h>
#include<math.h>

struct point //클래스
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2; //p는 객체

	double xdiff, ydiff;
	double distance;

	printf("첫 번째 점의 좌표 입력 : ");
	scanf("%d,%d", &p1.x, &p1.y); //0,0
	printf("두 번째 점의 좌표 입력 : ");
	scanf("%d,%d", &p2.x, &p2.y); //1,1

	xdiff = (p1.x - p2.x);
	ydiff = (p1.y - p2.y);
	distance = sqrt((xdiff * xdiff) + (ydiff * ydiff));
	printf("두 점 사이의 거리는 %4.2f\n", distance);
	system("pause");
}