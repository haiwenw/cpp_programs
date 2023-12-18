#include<iostream>

using namespace std;

typedef int matrix[3][6];

int main()
{
    matrix A={{1,2,3,4,5}, {0,0,0,8}, {6,4,2}};

    for (int i=1; i<=3; i++)
    {
        {for (int j=1; j<=6; j++)
        
            cout << A[i-1][j-1] << '\t';
            cout << endl;
        }
    }
    return 0;
}