/* Write a program to count the number of spaces in a given string */

#include<iostream>
using namespace std;

int returnSpaceCount(string str)
{
    int spaceCounter = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==' ')
        {
            spaceCounter++;
        }
    }
    return spaceCounter;
}

int main()
{
    string str;
    cout<<"Enter a sentence : "<<endl;
    getline(cin, str);
    
    
    cout<<"Number of spaces in the given string = "<< returnSpaceCount(str) <<endl;
    return 0;
}