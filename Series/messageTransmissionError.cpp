/* A space explorer's ship crashed on Mars! They send a series of 'SOS' messages to Earth for help. 
Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, s, determine how many letters of the SOS message have been changed by radiation. For example - 
I/P: SOSTOT
O/P: 2
(The original message was 'SOSSOS'. Two of the message's characters were changed in transit.)
I/P: SOSSPSSQSSOR
O/P: 3
*/

#include<iostream>
using namespace std;

int checkMessageForErrors(string s) 
{
    char sos[] = {'S','O','S'};
    int i,j = 0;
    int errorCount = 0;
    for(int i=0; i<s.length(); i++)
    {
        j = j % 3;
        if(s[i] != sos[j])
        {
            errorCount++;
        }
        j++;
    }
    return errorCount;
}

int main()
{
    cout<<"Message 'SOSSPSSQSSOR' has "<<checkMessageForErrors("SOSSPSSQSSOR")<<" errors"<<endl;
    cout<<"Message 'SOSSOT' has "<<checkMessageForErrors("SOSSOT")<<" errors"<<endl;
    cout<<"Message 'SOS' has "<<checkMessageForErrors("SOS")<<" errors"<<endl;
    cout<<"Message '' has "<<checkMessageForErrors("")<<" errors"<<endl;
    cout<<"Message 'SSS' has "<<checkMessageForErrors("SSS")<<" errors"<<endl;
    return 0;
}