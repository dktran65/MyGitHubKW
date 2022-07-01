/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

int main() {
	char *a;

	// a = new char;
	// a = 2;
	// free(a);
	return 0;
}

void array_boundary_violation()
{
	int aBV[3] = {1,2,3};

	aBV[2]= 5;
}


void null_pointer_deference_general_must()
{
	int *iPtr = NULL;

	if (iPtr != NULL) *iPtr = 2;


}
