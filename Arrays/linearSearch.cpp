/* Write a program to perform a linear search on an array on N numbers where the array as well as the key to search is accepted from the user */

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

int linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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

    int pos = linearSearch(arr, num, key);
    if(pos != -1)
    {
        cout<<"The element is present at position "<<pos+1<<endl;
    }
    else
    {
        cout<<"The element is not present"<<endl;
    }
    return 0;
}