#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;	// 사실 불필요한 break문!
	}
	return 0;
}