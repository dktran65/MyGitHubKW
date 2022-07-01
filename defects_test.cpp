/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

int main() {
	char *a;

<<<<<<< HEAD
	// a = new char;
=======
	// a = 2;
>>>>>>> 3603d8a75a3e0e67538194ea8c036dca6940a3de
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

<<<<<<< HEAD
	if (iPtr != NULL) *iPtr = 2;
=======
	if(iPtr != NULL) *iPtr = 2;
>>>>>>> 3603d8a75a3e0e67538194ea8c036dca6940a3de

}
