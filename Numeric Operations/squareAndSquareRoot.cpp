/* Accept 3 numbers and print the square of the smallest number and the square root of the largest number */

#include<iostream>
#include<cmath>
using namespace std;

int returnLargest(int a, int b, int c)
{
    int largest = a;
    if(b > largest)
    {
        largest = b;
    }
    if(c > largest)
    {
        largest = c;
    }
    return largest;
}

int returnSmallest(int a, int b, int c)
{
    int smallest = a;
    if(b < smallest)
    {
        smallest = b;
    }
    if(c < smallest)
    {
        smallest = c;
    }
    return smallest;
}

int main()
{
    int a, b, c;
    cout<<"Enter 3 numbers - "<<endl;
    cin>>a>>b>>c;

    int largest = returnLargest(a,b,c);
    int smallest = returnSmallest(a,b,c);

    
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The smallest number is "<<smallest<<endl;
    
    cout<<"The square of the smallest number is "<< pow(smallest, 2) <<endl;
    cout<<"The square root of the largest number is "<< sqrt(largest) <<endl;
    return 0;
}