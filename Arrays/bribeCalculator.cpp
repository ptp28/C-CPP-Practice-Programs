/* It is New Year's Day and people are in line for the Wonderland rollercoaster ride. Each person wears a sticker indicating their initial position in the queue from 1 to n. Any person can bribe the person directly in front of them to swap positions, but they still wear their original sticker. One person can bribe at most two others.
Determine the minimum number of bribes that took place to get to a given queue order. Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic. For example - 
q = [1,2,3,5,4,6,7,8]
If person 5 bribes person 4, the queue will look like this: 1,2,3,5,4,6,7,8. Only  bribe is done. Print 1.
q = [4,1,2,3]
Person 4 had to bribe 3 people to get to the current position. Print Too chaotic.
I/P : q = [2,1,5,3,4]
O/P : 3
I/P : q = [2,5,1,3,4]
O/P : Too chaotic
I/P : q = [1,2,5,3,7,8,6,4]
O/P : 7
I/P : q = [5,1,2,3,7,8,6,4]
O/P : Too chaotic
*/

#include<iostream>
using namespace std;

static void calculateBribes(int q[], int n) {
        
        int totalBribeCount = 0;
        int loopBribeCount = 0;
        int temp = 0;  
        for(int i=0; i < n; i++)
        {  
            loopBribeCount = 0;
            for(int j=1; j < (n-i); j++)
            {  
                if(q[j-1] > q[j])
                { 
                    totalBribeCount++;
                    loopBribeCount++;
                    temp = q[j-1];  
                    q[j-1] = q[j];  
                    q[j] = temp;  
                }
                else
                {
                    loopBribeCount = 0;
                }   
                if(loopBribeCount > 2)
                {
                    cout<<"Too chaotic"<<endl;
                    return;
                }       
            }
            
        }  
        cout<<totalBribeCount<<endl;
    }


int main()
{
    int testCase1[] = {1,2,3,5,4,6,7,8};
    int testCase2[] = {4,1,2,3};
    int testCase3[] = {2,1,5,3,4};
    int testCase4[] = {2,5,1,3,4};
    int testCase5[] = {1,2,5,3,7,8,6,4};
    int testCase6[] = {5,1,2,3,7,8,6,4};
    int testCase7[] = {1,2,5,3,4,7,8,6};

    calculateBribes(testCase1, 8);
    calculateBribes(testCase2, 4);
    calculateBribes(testCase3, 5);
    calculateBribes(testCase4, 5);
    calculateBribes(testCase5, 8);
    calculateBribes(testCase6, 8);
    calculateBribes(testCase7, 8);
    return 0;
}
