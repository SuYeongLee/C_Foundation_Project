#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center;
};

int main(void)
{
	struct point can = { 2, 7 };
	double rad = 5.5;

	struct circle ring = { rad, &can };
	printf("���� ������: %g \n", ring.radius);
	printf("���� �߽� [%d, %d \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}