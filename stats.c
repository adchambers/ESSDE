/******************************************************************************
 * Copyright (C) 2019 by Adam Chambers
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <This simple applicatoin performs statistical analytics on a dataset.>
 * @author <Adam Chambers>
 * @date <24 February 2019>
 */

#include <stdio.h>
#include "stats.h"

// Size of the Data Set
#define SIZE (40)

unsigned char data[SIZE] = { 34, 201, 190, 154, 8, 194, 2, 6,
                            114, 88, 45, 76, 123, 87, 25, 23,
                            200, 122, 150, 90, 92, 87, 177, 244,
                            201, 6, 12,  60, 8, 2, 5, 67,
                            7, 87, 250, 230, 99, 3, 100, 90};

void main() {

    printf("Here's how our unsorted array appears:\n");
    print_array(data, SIZE);
    
    printf("\nHere's how our sorted array appears:\n");
    sort_array(data, SIZE);
    print_array(data, SIZE);

    printf("\nHere's a few interesting statistics about our array:\n");
    print_statistics();
}

void print_statistics() {

    printf("Minimum: %i", find_minimum(data, SIZE));
    printf("\nMaximum: %i", find_maximum(data, SIZE));
    printf("\nMean: %i", find_mean(data, SIZE));
    printf("\nMedian: %i", find_median(data, SIZE));
}

void print_array(unsigned char input_data[], unsigned int input_length){

    for(int i = 0; i <= input_length-1; i++){
        printf("data[%i] = %i\n", i, input_data[i]);
    }
}

int find_median(unsigned char input_data[], unsigned int input_length){

    sort_array(data, SIZE);
    return data[SIZE/2];

}

int find_mean(unsigned char input_data[], unsigned int input_length){

    int total = 0;

    for(int i = 0; i <= SIZE-1; i++){
        total += data[i];
    }

    return total/SIZE;
}

int find_maximum(unsigned char input_data[], unsigned int input_length){

    sort_array(data, SIZE);
    return data[0];
}

int find_minimum(unsigned char input_data[], unsigned int input_length){

    sort_array(data, SIZE);
    return data[SIZE-1];
}

void sort_array(unsigned char input_data[], unsigned int input_length){

    int i, temp, swapped;

    while(1){

        swapped = 0;

        for(i=0; i < SIZE-1; i++){

            if(input_data[i] < input_data[i+1]){
                int temp = input_data[i];
                input_data[i] = input_data[i+1];
                input_data[i+1] = temp;
                swapped = 1;
            }
        }

        if(swapped == 0) break;
    }
}
