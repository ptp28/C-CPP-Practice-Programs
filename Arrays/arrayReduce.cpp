/* Input integer array and add the elements having same value, thus reducing the number of elements in the array. 
I/P: 1 4 2 9 2 4 6 9
O/P: 1 8 4 18 6
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

void reduceArray(int mainArray[], int mainArraySize, int reducedArray[], int &reducedArraySize)
{
    int addFlag = 0;
    for(int i=0; i<mainArraySize;i++)
    {
        addFlag = 0;
        for(int j=0; j<reducedArraySize; j++)
        {
            if(mainArray[i] == reducedArray[j])
            {
                reducedArray[j] = reducedArray[j] + mainArray[i];
                addFlag = 1;
                break;
            }
        }
        if(addFlag == 0)
        {
            reducedArray[reducedArraySize] = mainArray[i];
            reducedArraySize++;
        }
    }
}

int main()
{
    int mainArraySize = 0, reducedArraySize = 0;
    cout<<"Enter size of the array : ";
    cin>>mainArraySize;

    int mainArray[mainArraySize];
    int reducedArray[mainArraySize];
    

    acceptArray(mainArray, mainArraySize);

    reduceArray(mainArray, mainArraySize, reducedArray, reducedArraySize);

    cout<<"The original array is : ";
    printArray(mainArray, mainArraySize);
    cout<<"The reduced array is : ";
    printArray(reducedArray, reducedArraySize);
    return 0;
}