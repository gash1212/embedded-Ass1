/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Functions for basic stats operations on array of chars
 *
 * We do basic stats such as Min, Max, Mean, and Median on an array
 * of chars
 *
 * @author Gaurav Sharma
 * @date August 6, 2017
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Test array before sorting :\n");
  print_array(test, SIZE);

  sort_array(test, SIZE);
  printf("Test array after sorting :\n");
  print_array(test, SIZE);

  printf("Stats of the test array\n");
  print_statistics(test, SIZE);

  return 0;
}

void print_array(unsigned char * array, size_t size)
{
	for (size_t i = 0; i < size; i++) {
		printf("%d",array[i]);
		if (i < size - 1) {
			printf(", ");
		}
	}
	printf("\n");
}


void sort_array(unsigned char * array, size_t size)
{
	for (size_t i = 0; i < size; i++) {
		for (size_t j = i + 1; j < size; j++) {
		       if (array[i] < array[j]) {
				unsigned char temp = array[i];
		 		array[i] = array[j];
				array[j] = temp;
		       }
		}
	}		
}

void print_statistics(unsigned char * array, size_t size) 
{
	printf("Maximum: %d, Minimum: %d, Mean: %d, Median %d\n", 
			find_maximum(array, size), 
			find_minimum(array, size), 
			find_mean(array, size), 
			find_median(array, size));
}


unsigned char find_maximum(unsigned char * array, size_t size)
{
	unsigned char max = array[0];
	for (size_t i = 1; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	return max;
}

unsigned char find_minimum(unsigned char * array, size_t size)
{
	unsigned char min = array[0];
	for (size_t i = 1; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}
	return min;
}

unsigned char find_mean(unsigned char * array, size_t size)
{
	unsigned int sum = 0;
	for (size_t i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum/size;
}

unsigned char find_median(unsigned char * array, size_t size)
{
	sort_array(array, size);
	if (size % 2 == 0) {
		return (array[(size/2)-1] + array[size/2])/2;
	}
	else {
		return array[size/2];
	}
}
