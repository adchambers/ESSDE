/**
 * @file <stats.c> 
 * @brief <This simple application performs statistical analytics on a dataset.>
 * @author <Adam Chambers>
 * @date <24 February 2019>
 */

#ifndef __STATS_H__
#define __STATS_H__

/** 
 * @brief prints the statistics of an array
 *
 * A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median 
 *
 * @return void
 */
void print_statistics();

/** 
 * @brief Prints an array to the screen
 *
 * Given an array of data and a length, print the array to the screen
 *
 * @param input_data An array of integers that is used for statistical calculation and output
 * @param input_length The size/length of input_data
 * @return void
 */
void print_array(unsigned char input_data[], unsigned int input_length);

/** 
 * @brief Returns the median value
 *
 * Given an array of data a length, return the median value
 *
 * @param input_data An array of integers that is used for statistical calculation and output
 * @param input_length The size/length of input_data
 * @return The median value
 */
int find_median(unsigned char input_data[], unsigned int input_length);

/** 
 * @brief Returns the mean value
 *
 * Given an array of data a length, return the mean
 *
 * @param input_data An array of integers that is used for statistical calculation and output
 * @param input_length The size/length of input_data
 * @return The mean value
 */
int find_mean(unsigned char input_data[], unsigned int input_length);

/** 
 * @brief Returns the maximum value
 *
 * Given an array of data a length, return the maximum
 *
 * @param input_data An array of integers that is used for statistical calculation and output
 * @param input_length The size/length of input_data
 * @return The maximum value
 */
int find_maximum(unsigned char input_data[], unsigned int input_length);

/** 
 * @brief Returns the minimum value
 *
 * Given an array of data a length, return the minimum
 *
 * @param input_data An array of integers that is used for statistical calculation and output
 * @param input_length The size/length of input_data
 * @return The minimum value
 */
int find_minimum(unsigned char input_data[], unsigned int input_length);

/** 
 * @brief Sorts an array from largest to smallest
 *
 * Given an array of data and a length, sort the array from largest to smallest
 *
 * @param input_data An array of integers that is used for statistical calculation and output
 * @param input_length The size/length of input_data
 * @return void
 */
void sort_array(unsigned char input_data[], unsigned int input_length);

#endif /* __STATS_H__ */
