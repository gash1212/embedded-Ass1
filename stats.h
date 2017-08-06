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
 * @file stats.h
 * @brief Header for basic stats operation on array of chars
 *
 * We do basic stats such as Min, Max, Mean, and Median on an array
 * of chars
 *
 * @author Gaurav Sharma
 * @date August 6, 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: void
 */
void print_statistics(unsigned char * array, size_t size); 

/**
 * @brief print array 
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: void
 */
void print_array(unsigned char * array, size_t size);

/**
 * @brief find mean of array
 * 
 * Given an array of data and a length, returns the mean
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: the mean
 */
unsigned char find_mean(unsigned char * array, size_t size);

/**
 * @brief find median of array
 * 
 * Given an array of data and a length, returns the median
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: the mean
 */
unsigned char find_median(unsigned char * array, size_t size);

/**
 * @brief find max of array
 * 
 * Given an array of data and a length, returns the maximum
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: the maximum
 */
unsigned char find_maximum(unsigned char * array, size_t size);

/**
 * @brief find minimum of array
 * 
 * Given an array of data and a length, returns the minimum
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: the minimum
 */
unsigned char find_minimum(unsigned char * array, size_t size);

/**
 * @brief sort the array 
 *  
 * Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value, and the last element (n-1) 
 * should be the smallest value.)
 *
 * @param array: the input array
 * @param size: size of array
 *
 * @return: void
 */
void sort_array(unsigned char * array, size_t size);


#endif /* __STATS_H__ */
