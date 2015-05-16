#include <stdio.h>
#include "hoanvi.h"

void main()
{
	printf("Toi la Thinh\n");
	int a = 3;
	int b = 4;
	printf("a = %d, b = %d\n", a, b);
	hoanVi(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}