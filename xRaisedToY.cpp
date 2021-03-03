/* Accept two numbers x and y and calculate the yth power of x (i.e. x^y) using for loop */

#include<iostream>
using namespace std;

int returnXRaisedToY(int x, int y)
{
    int pow = 1;
    for(int counter = 1; counter <= y; counter++)
    {
        pow = pow * x;  //2, 4, 8
    }
    return pow;
}

int main()
{
    int x, y;
    cout<<"A program to raise x to the power of y"<<endl;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;

    
    cout<<"The power is = "<< returnXRaisedToY(x, y);
    return 0;
}
