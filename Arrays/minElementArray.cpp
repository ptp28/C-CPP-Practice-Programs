/* Write a program to find that the smallest number amongst a collection of numbers which are stored in an array */

#include<iostream>
using namespace std;

int findSmallestNumber(int arr[], int count)
{
    int min = INT_MAX;
    int index = -1;
    for(int i=0; i<count; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

void acceptArray(int arr[], int count)
{
    cout<<"Enter the elements of the array :- "<<endl;
    for(int i=0; i<count; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int count = 0;
    cout<<"Enter the number of elements for the array : ";
    cin>>count;
    int arr[count];

    acceptArray(arr, count);
    int pos = findSmallestNumber(arr, count);

    cout<<"The smallest number in the array is "<<arr[pos]<<" at index "<<pos<<endl;
}