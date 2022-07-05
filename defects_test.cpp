/*
 * File: defect_test.cpp
 */
#include <stdlib.h>
typedef unsigned int u32;
typedef unsigned long long u64;

u32 get_u32_value(void);
u64 get_u64_value(void);


int main() {
	char *a;

	// a = new char;
	// free(a);
	return 0;
}

void array_boundary_violation()
{
	int aBV[3] = {1,2,3};

	aBV[1]= 5;
}


void null_pointer_deference_general_must()
{
	int *iPtr = NULL;

	if (iPtr != NULL) 
		*iPtr = 2;
}


void example_data_cast_diff(void) {
	u32 mask32 = 0xff;
	u64 mask64 = 0xff;

	u32 value32 = get_u32_value();
	u64 value64 = get_u64_value();

	value64 &= u64 (~mask32);
}