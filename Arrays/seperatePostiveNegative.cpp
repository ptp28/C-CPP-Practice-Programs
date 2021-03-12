/* Write a program to accept a list of numbers and seperate it to create a list of all entered postive numbers and a list of all entered negative numbers */

#include<iostream>
using namespace std;

void printArray(int arr[], int length)
{
    for(int i=0; i<length;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int num, posListCounter = 0, negListCounter = 0;
    int posList[100], negList[100];

    cout<<"Keep entering postive or negative numbers. Enter 0 (zero) to stop."<<endl;
    while(true)
    {
        cout<<"Enter a number : ";
        cin>>num;
        if(num == 0)
        {
            break;
        }
        else if(num > 0)
        {
            posList[posListCounter] = num;
            posListCounter++;
        }
        else
        {
            negList[negListCounter] = num;
            negListCounter++;
        }
    }

    cout<<"All positive numbers entered are :";
    printArray(posList, posListCounter);
    
    cout<<"All negative numbers entered are :";
    printArray(negList, negListCounter);
    return 0;
}