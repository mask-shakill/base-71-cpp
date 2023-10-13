#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    int counter = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            counter = counter + i;
        }
    }
    if (counter <= 1)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
    cout << endl;
}