#include<iostream>
using namespace std;

void spiralPrint(int rowUpperBound, int columnUpperBound, int a[4][3])
{
    int rowLowerBound = 0, columnLowerBound = 0, i;

    while (rowLowerBound < rowUpperBound && columnLowerBound < columnUpperBound) {
        //Print first column
        for(i = rowLowerBound; i<rowUpperBound; i++)
        {
            cout<<a[i][columnLowerBound]<<", ";
        }
        columnLowerBound++;

        //Print bottom row
        for(i=columnLowerBound; i<columnUpperBound ; i++)
        {
            cout<<a[rowUpperBound-1][i]<<", ";
        }
        rowUpperBound--;

        //Print last column
        for(i=rowUpperBound-1; i>=rowLowerBound; i--)
        {
            cout<<a[i][columnUpperBound-1]<<", ";
        }
        columnUpperBound--;

        //Print top row
        for(i=columnUpperBound-1; i>=columnLowerBound; i--)
        {
            cout<<a[rowLowerBound][i]<<", ";
        }
        rowLowerBound++;
    }
}

int main()
{
    int a[4][3] = { { 1, 2, 3 },
                    { 4, 5, 6 },
                    { 7, 8, 9 },
                    {10,11,12 }
                };

    // Function Call
    spiralPrint(4, 3, a);
    return 0;
}