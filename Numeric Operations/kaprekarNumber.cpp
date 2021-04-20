/*  Write a program to check if the given number is a Kaprekar number. 
A Kaprekar number is a number whose square when divided into two parts, that the sum of the two parts is equal to the original number and none of the parts has the value 0. For example - 
I/P: 45
O/P: The number is a Kaprekar number
(45-> 45^2=2025 -> 20+25 = 45. Therefore 45 is a Kaprekar number).
I/P: 13
O/P: The number is not a Kaprekar number
(13 -> 13^2=169 -> Division of the square can be [1,69] or [16,9]. Since none of these divisions are equal to 13, the number is not a Kaprekar number).
Other Kaprekar numbers -> 1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, ...
*/
#include<iostream>
using namespace std;

int checkIfKaprekar(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    int numSquare = num * num;
    string s = to_string(numSquare);
    string s1, s2, s3, s4;
    int arr[2][2] = { 0 };
    int arrSize = 0;

    //Split number
    if(s.length() % 2 != 0)
    {
        s1 = s.substr(0, s.length()/2);
        s2 = s.substr(s.length()/2, s.length()/2+1);
        s3 = s.substr(0, s.length()/2+1);
        s4 = s.substr(s.length()/2+1, s.length()/2+1);

        arr[0][0] = stoi(s1);
        arr[0][1] = stoi(s2);
        arr[1][0] = stoi(s3);
        arr[1][1] = stoi(s4);
        arrSize = 2;
        //cout<<sizeof(arr)/sizeof(arr[0]);
    }
    else
    {
        s1 = s.substr(0, s.length()/2);
        s2 = s.substr(s.length()/2, s.length()/2+1);

        arr[0][0] = stoi(s1);
        arr[0][1] = stoi(s2);
        arrSize = 1;
    }

    //Check if Kaprekar number
    int sum = 0;
    for(int i=0; i<arrSize; i++)
    {
        sum = 0;
        for(int j=0; j<2; j++)
        {
            sum = sum + arr[i][j];
        }
        if(sum == num)
        {
            return 1;
        }
    }
    return 0;
}



int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(checkIfKaprekar(num))
    {
        cout<<"The number is a Kaprekar number"<<endl;
    }
    else
    {
        cout<<"The number is not a Kaprekar number"<<endl;
    }
    return 0;
}