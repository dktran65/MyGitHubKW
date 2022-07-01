/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

void array_boundary_violationA()
{
	int aBV[1] = {1,2,3};

<<<<<<< HEAD
	aBV[1]= 5;
=======
	aBV[2]= 5;
>>>>>>> 3603d8a75a3e0e67538194ea8c036dca6940a3de
}


void null_pointer_deference_general_mustA()
{
	int *iPtrA = NULL;

	if (iPtrA != NULL) 
	   *iPtrA = 2;

}
