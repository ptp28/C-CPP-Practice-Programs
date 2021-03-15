/* An array is called a 'lucky' array if the frequency of the minimum elements is odd, otherwise it is considered 'unlucky'. Check  if the array is lucky or not. Accept the array having N integers from the users. */

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

int checkLuckyArray(int arr[], int size)
{
    int minimumElement = arr[0];
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(minimumElement == arr[i])
        {
            count++;
        }
        if(arr[i] < minimumElement)
        {
            minimumElement = arr[i];
            count = 0;
        }
    }

    if(count%2 == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];

    acceptArray(arr,n);

    cout<<"The array is : ";
    printArray(arr, n);

    if(checkLuckyArray(arr, n))
    {
        cout<<"The entered array is a 'lucky' array"<<endl;
    }
    else
    {
        cout<<"The entered array is not a 'lucky' array"<<endl;
    }
    
    return 0;
}