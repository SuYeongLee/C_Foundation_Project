#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);

	if (num == 1)
	{
		goto ONE;
	}
	else if (num == 2)
	{
		goto TWO;
	}
	else
	{
		goto OTHER;
	}

ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̽��ϴ�! \n");
END:
	return 0;
}