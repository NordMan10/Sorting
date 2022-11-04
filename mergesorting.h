#ifndef MERGESORTING_H
#define MERGESORTING_H

#include <math.h>

class MergeSorting
{
public:
    MergeSorting();

    void MergeArrays(int arr[], int begin, int end, int tempArr[]);
    void MergeSort(int arr[], int begin, int end, int tempArr[]);

    long my_pow(int base, int pow);



};

#endif // MERGESORTING_H
