/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

void array_boundary_violationA()
{
	int aBV[3] = {1,2,3};

	aBV[2]= 5;
}


void null_pointer_deference_general_mustA()
{
	int *iPtrA = NULL;

	if (iPtr != NULL) 
	   *iPtrA = 2;

}
