#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int sumOfArray(int a[], int size) {
  if (size < 1) {
    std::cerr << "ERROR: sumOfArray called with size < 1" << std::endl;
    exit(1);
  }
  int result=a[0];
  for (int i=1; i<size; i++) {
      	result += a[i];
  }
  return result;
}
