/* Write a program to accept an array and find its range. The range of an array is defined as the difference between the maximum value element of the array and the minimum value element of the array.
*/

#include<iostream>
using namespace std;

void acceptArray(int arr[], int size)
{
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int getArrayRange(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return (max-min);
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    acceptArray(arr, n);
    cout<<"The range of the array is = "<<getArrayRange(arr, n)<<endl;
    return 0;
}