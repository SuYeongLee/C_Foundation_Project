#include <stdio.h>

#define NAME "�氡�޽�"
#define AGE 24
#define PRINT_ADDR puts("�ּ�: ��⵵ ���ν� \n");

int main(void)
{
	printf("�̸�: %s \n", NAME);
	printf("����: %d \n", AGE);
	PRINT_ADDR;
	return 0;
}