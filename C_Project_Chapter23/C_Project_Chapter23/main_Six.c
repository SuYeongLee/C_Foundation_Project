#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main(void)
{
	Div val = IntDiv(5, 3);
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainder);
	return 0;
}