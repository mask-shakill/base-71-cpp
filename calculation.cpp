#include <iostream>
using namespace std;
int main()
{
    // addition in two integer
    int numOne;
    int numTwo;

    cout << "Enter First  Number : ";
    cin >> numOne;
    cout << "Enter  Second Number : ";
    cin >> numTwo;
    int addition = numOne + numTwo;
    int subtraction = addition - numOne;
    int multiplication = subtraction * addition;
    int division = multiplication / subtraction;
    int Result = division;
    cout << "Total Calculation = " << Result << endl;
}