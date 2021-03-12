/* Write a program to accept three digits(0-9) and display the combinations of it i.e. for digits 1,2,3 , the combinations are 123,132,213,231,312,321. */

#include<iostream>
using namespace std;

void printAllCombinations(int arr[3])
{
    for (int x = 0; x < 3; x++) 
    {
        for (int y = 0; y < 3; y++) 
        {
            for (int z = 0; z < 3; z++) 
            {
                if (x != y && y != z && z != x) 
                {
                    cout<<arr[x]<<arr[y]<<arr[z]<<endl;
                }
            }
        }
    }
}

int main()
{
    int num;
    int separateNumbers[3];
    cout<<"Enter 3 single digit numbers : "<<endl;
    
    for(int i=0; i<3; i++)
    {
        cin>>separateNumbers[i];
    }

    cout<<"All possible combinations of the digits of the numbers are "<<endl;
    printAllCombinations(separateNumbers);
    return 0;
}