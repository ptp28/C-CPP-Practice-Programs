/* Write a program to add two numbers represented by two arrays. The array and the numbers have to  be accepted from the user
For example - 
I/P: 984, 1234
array1 = [9, 8, 4], array2 = [1, 2, 3, 4]
O/P: 2218
*/

#include<iostream>
using namespace std;

void acceptArray(int arr[], int size)
{
    cout<<"Enter the array elements - \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int addArrays(int arr1[], int len1, int arr2[], int len2) 
{
    int sumTotal = 0;
    int sumDigit = 0;
    int carry = 0;
    int units = 1;
    int pos1 = len1 - 1;
    int pos2 = len2 - 1;
    while(pos1 >= 0 || pos2 >= 0 || carry > 0)
    {
        sumDigit = 0;
        if(pos1 >= 0)
        {
            sumDigit = sumDigit + arr1[pos1];
        }
        if(pos2 >= 0)
        {
            sumDigit = sumDigit + arr2[pos2];
        }
        if(carry != 0)
        {
            sumDigit = sumDigit + carry;
            carry = 0;
        }
        if(sumDigit > 10)
        {
            sumDigit = sumDigit - 10;
            carry = 1;
        }
        sumTotal = sumTotal + (sumDigit * units);
        units = units * 10;
        pos1--;
        pos2--;
    }
    return sumTotal;
}

int main() 
{
    int len1, len2;
    cout<<"Enter the length of the first array : ";
    cin>>len1;
    int arr1[len1];
    acceptArray(arr1, len1);
    cout<<"Enter the length of the second array : ";
    cin>>len2;
    int arr2[len2];
    acceptArray(arr2, len2);

    cout<<"The two entered numbers are - \n";
    printArray(arr1, len1);
    printArray(arr2, len2);

    cout<<"The sum of the entered arrays is : ";
    cout<<addArrays(arr1, len1, arr2, len2);
    cout<<endl;
    return 0;
}