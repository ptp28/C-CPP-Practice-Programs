/* Accept an array and print the largest and the second largest number of the entered array */

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

void arrayFindLargestAndSecondLargest(int arr[], int size)
{
    int largest = INT64_MIN;
    int secondLargest = INT64_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout<<"Largest element : "<<largest<<endl;
    cout<<"Second largest element : "<<secondLargest<<endl;
}

int main()
{
    int num;
    cout<<"Enter the length of the array : ";
    cin>>num;
    int arr[num], key;
    acceptArray(arr, num);
    cout<<"Enter the key to search for : ";
    cin>>key;

    arrayFindLargestAndSecondLargest();
    return 0;
}