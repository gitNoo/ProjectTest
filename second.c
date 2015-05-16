#include "hoanvi.h"

void hoanVi(int*a, int*b)
{
	*a ^= *b;	
	*b ^= *a;	
	*a ^= *b;	
}