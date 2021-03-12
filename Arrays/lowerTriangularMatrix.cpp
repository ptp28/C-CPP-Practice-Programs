/* Write a program to accept a 3x3 matrix, display the matrix and print the lower triangle of the matrix */

#include<iostream>
using namespace std;

void printLowerTriangularMatrix(int a[][3])
{
	cout<<"The lower triangular matrix of the entered matrix is :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i<j)
				cout<<"0\t";
			else
				cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}

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

int main()
{
    int matrix[3][3];

    acceptMatrix(matrix);
    displayMatrix(matrix);
    printLowerTriangularMatrix(matrix);
    return 0;
}