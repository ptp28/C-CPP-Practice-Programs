/* Write a program to print the following series (Let user decide using switch case)
a)  1   4   7   10  ......   40
b)  1  -4   7  -10  ......  -40
*/

#include <iostream>
using namespace std;

void printPositiveSeries()
{
    int counter = 1;
    while (counter <= 40)
    {
        cout << counter << "   ";
        counter = counter + 3;
    }
}

void printAlternateSeries()
{
    int counter = 1;
    while (counter <= 40)
    {
        if (counter % 2 == 0)
        {
            cout << "  -" << counter << "   ";
        }
        else
        {
            cout << counter;
        }
        counter = counter + 3;
    }
}

int main()
{
    char choice;
    int counter = 1;
    cout << "Select a series," << endl;
    cout << "a)  1   4   7   10  ......   40" << endl;
    cout << "b)  1  -4   7  -10  ......  -40" << endl;
    cin >> choice;
    switch (choice)
    {
    case 'a':
        printPositiveSeries();
        break;

    case 'b':
        printAlternateSeries();
        break;

    default:
        cout << "Wrong choice" << endl;
        break;
    }
    cout << endl;
    return 0;
}