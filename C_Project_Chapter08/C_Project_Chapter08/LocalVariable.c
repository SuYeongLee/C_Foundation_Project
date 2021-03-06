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
	int num1 = 20; // 이후부터 num1 유효
	int num2 = 30; // 이후부터 num2 유효
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;	// num1, num2 유효한 마지막 문장
}

int main(void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;	// main의 num이 유효한 마지막 문장
}