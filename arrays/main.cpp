#include<iostream>

using namespace std;

int main()
{
    const int n=10;
    typedef int vector[n];

    vector A = {0};

    cout << "Enter components of array" << endl;

    for (int i=1; i<=n; i++)
    {
        cin >> A[i-1];
        int x = A[i-1];
    }

    for (int i=1; i<=n; i++)
    {
        cout << A[i-1] << endl;
    }

    return 0;
}