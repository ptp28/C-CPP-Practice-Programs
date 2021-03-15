/* Write a program to accept a 3x3 matrix, display the matrix and check if the matrix is symmetric or not. For example - 
I/P: 1 2 3
     2 1 4
     3 4 3 
O/P: The entered matrix is a symmetric matrix
*/

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

int checkMatixSymmetry(int a[][3])
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) 
        {
            if (a[i][j] != a[j][i]) 
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int matrix[3][3];

    acceptMatrix(matrix);
    displayMatrix(matrix);
    if(checkMatixSymmetry(matrix))
    {
        cout<<"The entered matrix is a symmetric matrix"<<endl;
    }
    else
    {
        cout<<"The entered matrix is not a symmetric matrix"<<endl;
    }
    return 0;
}