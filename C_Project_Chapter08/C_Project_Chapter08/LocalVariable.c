#include <stdio.h>

int SimpleFuncOne(void)
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0;
}

int SimpleFuncTwo(void)
{
	int num1 = 20; // ���ĺ��� num1 ��ȿ
	int num2 = 30; // ���ĺ��� num2 ��ȿ
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;	// num1, num2 ��ȿ�� ������ ����
}

int main(void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;	// main�� num�� ��ȿ�� ������ ����
}