/* Given the time in numerals convert it to words, as shown below:
5:00 -> five o' clock
5:01 -> one minute past five
5:15 -> quarter past five
5:25 -> twenty five minutes past five
5:30 -> half past five
5:43 -> seventeen minutes to six
5:45 -> quarter to six
5:55 -> five minutes to six
At minutes = 0, use o' clock. For 1 <= minutes <= 30, use past, and for 30 < minutes use to. Note the space between the apostrophe and clock in o' clock. Write a program which prints the time in words for the input given in the format described.
*/

#include<iostream>
using namespace std;

string convertHourstoString(int hour)
{
    switch(hour)
    {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        case 10:
            return "ten";
        case 11:
            return "eleven";
        case 12:
            return "twelve";
        default:
            return "error";
    }
}

string covertMinutestoString(int min)
{
    switch(min)
    {
        case 1:
            return "one minute";
        case 2:
            return "two minutes";
        case 3:
            return "three minutes";
        case 4:
            return "four minutes";
        case 5:
            return "five minutes";
        case 6:
            return "six minutes";
        case 7:
            return "seven minutes";
        case 8:
            return "eight minutes";
        case 9:
            return "nine minutes";
        case 10:
            return "ten minutes";
        case 11:
            return "eleven minutes";
        case 12:
            return "twelve minutes";
        case 13:
            return "thirteen minutes";
        case 14:
            return "fourteen minutes";
        case 15:
            return "quarter";
        case 16:
            return "sixteen minutes";
        case 17:
            return "seventeen minutes";
        case 18:
            return "eighteen minutes";
        case 19:
            return "nineteen minutes";
        case 20:
            return "twenty minutes";
        case 21:
            return "twenty one minutes";
        case 22:
            return "twenty two minutes";
        case 23:
            return "twenty three minutes";
        case 24:
            return "twenty four minutes";
        case 25:
            return "twenty five minutes";
        case 26:
            return "twenty six minutes";
        case 27:
            return "twenty seven minutes";
        case 28:
            return "twenty eight minutes";
        case 29:
            return "twenty nine minutes";
        case 30:
            return "half";
        default:
            return "error";
    }
}

string timeInWords(int h, int m) 
{
    if(m == 0)
    {
        return(convertHourstoString(h) + " o' clock");
    }
    else if(m <= 30)
    {
        return(covertMinutestoString(m) + " past " + convertHourstoString(h));
    }
    else 
    {
        return(covertMinutestoString(60-m) + " to " + convertHourstoString(h+1));
    }
}

int main()
{
    int hr, min;
    cout<<"Enter the hours value : ";
    cin>>hr;
    cout<<"Enter the minutes value : ";
    cin>>min;
    cout<<"The time is : "<<timeInWords(hr, min)<<endl;
    return 0;
}
