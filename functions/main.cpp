#include<iostream>
#include"averages.h"

using namespace std;

// float average(int first_number, int second_number, int third_number);
// float average(int first_number, int second_number);

int main()
{
    int number_A = 5, number_B = 6, number_C = 7;
    cout << "The average of " << number_A << " and ";
    cout << number_B << " is ";
    cout << average(number_A, number_B) << "." << endl;

    cout << "The average of " << number_A << " and ";
    cout << number_B << " and " << number_C << " is ";
    cout << average(number_A, number_B, number_C) << "." << endl;

    return 0;
}

