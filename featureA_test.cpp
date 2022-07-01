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

	if (iPtrA != NULL) 
	   *iPtrA = 2;

}


int f1aA(int vector)
{
  int direction[3] = {1,2,3};
  int z = 0;
  
  if (vector >= 0 && z>= 0) {
     z = direction[3] + direction[2];
     return z; 
  } else {
     z = direction[2] - direction[1];
     return z;  
  }
  
  // return z;
}
