#include "mergesorting.h"

MergeSorting::MergeSorting()
{

}

void MergeSorting::MergeArrays(int arr[], int begin, int end, int tempArr[])
{
    int middle = (begin + end) / 2;
    int leftPtr = begin;
    int rightPtr = middle + 1;
    int length = (end - begin) + 1;
    for (int i = 0; i < length; i++)
    {
        if (leftPtr > middle || (rightPtr <= end && arr[rightPtr] < arr[leftPtr]))
        {
            tempArr[i] = arr[rightPtr];
            rightPtr++;
        }
        else
        {
            tempArr[i] = arr[leftPtr];
            leftPtr++;
        }
    }
    for (int i = 0; i < length; i++)
    {
        arr[begin + i] = tempArr[i];
    }
}

void MergeSorting::MergeSort(int arr[], int begin, int end, int tempArr[])
{
    if (begin == end) return;
    int middle = (begin + end) / 2;
    MergeSort(arr, begin, middle, tempArr);
    MergeSort(arr, middle + 1, end, tempArr);
    MergeArrays(arr, begin, end, tempArr);
}

long MergeSorting::my_pow(int base, int pow)
{
    return std::pow(base, pow);
}
