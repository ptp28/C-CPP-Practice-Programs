/* Write a program to print 
1   2   4   8   16  ..... n
Accept n from the user. Also display the sum of the series
*/

#include <iostream>
using namespace std;

void printPowerOf2Series(int n)
{
    int pow = 1;
    int powSum = 0;
    while(pow <= n)
    {
        cout<<pow<<"   ";
        pow = pow * 2;
        powSum = powSum + pow;
    }
    cout<<endl;
    cout<<"The sum of the series is = "<<powSum;
}

int main()
{
    int n;
    cout<<"Series : 1   2   4   8   16  ..... n"<<endl;
    cout<<"Enter the value of n : ";
    cin>>n;

    printPowerOf2Series(n);
    cout << endl;
    return 0;
}