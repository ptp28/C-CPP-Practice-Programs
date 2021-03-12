/* Write a program to find the saddle point of the matrix. A saddle point is an element of the matrix such that it is the minimum element in its row and maximum element in its column. */

#include<iostream>
using namespace std;

void acceptMatrix(int a[][3])
{
	int i,j;
	cout<<"Enter the matrix :"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
}

void displayMatrix(int a[][3])
{
	int i,j;
	cout<<"The entered matrix is :"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int checkSaddlePoint(int a[][3])
{
    int i,j,k;
    int saddleFlag = 0;
    int minimumRowValue;
    int minimumRowIndex;
    int maximumColValue;
    int maximumColIndex;
	for(i=0;i<3;i++)
	{
        minimumRowValue = a[i][0];
        minimumRowIndex = 0;
		for(j=0;j<3;j++)
		{
			if(a[i][j] < minimumRowValue)
            {
                minimumRowValue = a[i][j];
                minimumRowIndex = j;
            }
		}
        maximumColValue = a[0][minimumRowIndex];
        maximumColIndex = 0;
        for(k=0;k<3;k++)
        {
            if(a[k][minimumRowIndex] > maximumColValue)
            {
                maximumColValue = a[k][minimumRowIndex];
                maximumColIndex = k;
            }
        }
        if(minimumRowValue == maximumColValue)
        {
            cout<<"Saddle point of the matrix found at ["<<minimumRowIndex+1<<","<<maximumColIndex+1<<"]"<<endl;
            saddleFlag++;
        }
	}
    return saddleFlag;
}


int main()
{
    int matrix[3][3];
    acceptMatrix(matrix);
    displayMatrix(matrix);

    if(checkSaddlePoint(matrix))
    {
        cout<<"The matrix has a saddle point"<<endl;
    }
    else
    {
        cout<<"The matrix does not have a saddle point"<<endl;
    }
    return 0;
}