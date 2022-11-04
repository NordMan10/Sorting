#include "mergesort_test.h"

MergeSort_Test::MergeSort_Test(QObject *parent)
    : QObject{parent}
{

}

void MergeSort_Test::MergeArrays_test()
{
    MergeSorting ms;
    int arr[] { 2, 3, 10, 0, 4, 3, 19, 9, 0, 23 };
    int tempArr[10];
    int begin = 0;
    int end = 9;
    ms.MergeSort(arr, begin, end, tempArr);
    int expected_arr[] { 0, 0, 2, 3, 3, 4, 9, 10, 19, 23 };
    for (int i = 0; i < end + 1; i++)
    {
        QVERIFY(arr[i] == expected_arr[i]);
    }

    for (int i = 0; i < end + 1; i++)
    {
        std::cout << arr[i] << ", ";
    }
}

void MergeSort_Test::pow_test()
{
    MergeSorting ms;
    QCOMPARE(ms.my_pow(2, 2), 4);
    QCOMPARE(ms.my_pow(2, 4), 16);
    QCOMPARE(ms.my_pow(3, 2), 9);
}

QTEST_MAIN(MergeSort_Test)
