#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, abs;
	printf("Á¤¼ö ÀÔ·Â: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("Àý´ì¹å: %d \n", abs);
	return 0;
}