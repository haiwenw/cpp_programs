#include<iostream>
#include<algorithm>
#include"max_min.h"

using namespace std;

int Maximum(matrix A)
{
    int maximum;

    maximum = A[0];
    
    for (int i=1; i<=dimen; i++)
    {
        maximum = (maximum > A[i-1]) ? maximum: A[i-1];
    }

    return maximum;
}

int Minimum(matrix A)
{
    int minimum;
    minimum = A[0];

    for (int i=1; i<=dimen; i++)
    {
        minimum = (minimum < A[i-1]) ? minimum: A[i-1];
    }

    return minimum;
}