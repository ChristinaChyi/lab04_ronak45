#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"
int countEvens(int a[], int size) {
	int total = 0;

	for(int i = 0; i<size; i++) 
	{
		if (isEven(a[i]) == true) {
			total ++;
		}	

	}
	return total;
}

