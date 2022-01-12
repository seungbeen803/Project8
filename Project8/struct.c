#include<stdio.h>
//struct => ±¸Á¶Ã¼
struct point
{
	int x;
	int y;
};
struct point p;

void main(void)
{
	p.x = 10;
	p.y = 20;
	printf("x=%d", p.x);
	printf("x=%d\n", p.y);
	system("pause");
}