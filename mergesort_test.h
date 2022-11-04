#ifndef MERGESORT_TEST_H
#define MERGESORT_TEST_H

#include <QObject>
#include <QTest>
#include <iostream>

#include "mergesorting.h"

class MergeSort_Test : public QObject
{
    Q_OBJECT
public:
    explicit MergeSort_Test(QObject *parent = nullptr);

private slots:
    void MergeArrays_test();
    void pow_test();

};

#endif // MERGESORT_TEST_H
