#ifndef search_h
#define search_h

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);



#endif