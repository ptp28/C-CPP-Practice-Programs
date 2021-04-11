/* The distance between two array values is the number of indices between them. Given a, find the minimum distance between any pair of equal elements in the array. If no such value exists, return -1. For example - 
a = [3,2,1,2,3]
There are two matching pairs of values: 3 and 2. The indices of the 3's are i=0 and j=4, so their distance is d[i,j]=|j-i| = 4
The indices of the 2's are i=1 and j=3, so their distance is d[i,j]=|j-i| = 2.
The minimum distance is min(4,2) = 2.
I/P: [7,1,3,4,1,7]
O/P: 3
I/P: [1,2,3,4,10]
O/P: -1
*/

#include<iostream>
using namespace std;

static int minimumDistances(int a[], int size) 
{
    int distance;
    int minimumDistance = -1;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size-1; j++)
        {
            if(a[i] == a[j])
            {
                distance = j - i;
                if(minimumDistance == -1 || distance < minimumDistance)
                {
                    minimumDistance = distance;
                }
            }
        }
    }
    return minimumDistance;
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"The minimum distance in the array is = "<<minimumDistances(arr, size)<<endl;
    return 0;
}