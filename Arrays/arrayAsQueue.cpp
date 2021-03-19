/* Implement array as a queue. Create a menu driven program which includes functions to push, pop, empty queue, display queue and check if the queue is empty/full. */

#include<iostream>
using namespace std;

int isEmpty(int count)
{
    if(count == 0)
    {
        cout<<"The queue is empty."<<endl;
        return 1;
    }
    return 0;
}

int isFull(int count)
{
    if(!(count < 100))
    {
        cout<<"The queue is full."<<endl;
        return 1;
    }
    return 0;
}

void queuePush(int arrayQueue[], int &count)
{
    int data;
    cout<<"Enter a number to push to the queue : ";
    cin>>data;

    if(!isFull(count))
    {
        arrayQueue[count] = data;
        count++;
    }
}

void queuePop(int arrayQueue[], int &count)
{
    int poppedElement = arrayQueue[0];
    
    if(!isEmpty(count))
    {
        for(int i=0; i<count; i++)
        {
            arrayQueue[i] = arrayQueue[i+1];
        }
        count--;
    }
    cout<<poppedElement<<" was popped from the queue."<<endl;
}

void emptyQueue(int arrayQueue[], int &count)
{
    while(!isEmpty(count))
    {
        queuePop(arrayQueue, count);
    }
}

void displayQueue(int arrayQueue[], int count)
{
    if(!isEmpty(count))
    {
        cout<<"The current queue contains :- "<<endl;
        for(int i=0; i<count; i++)
        {
            cout<<arrayQueue[i]<<endl;
        }
        cout<<endl;
    }
    else
    {
        cout<<"The current queue is empty."<<endl;
    }
}

int main()
{
    int choice;
    int arrayQueue[100];
    int count = 0;

    do
    {
        cout<<"*** Queue operations ***"<<endl;
        cout<<"1. Display the queue"<<endl;
        cout<<"2. Push to queue"<<endl;
        cout<<"3. Pop from queue"<<endl;
        cout<<"4. Empty the queue"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                displayQueue(arrayQueue, count);
                break;
            case 2:
                queuePush(arrayQueue, count);
                break;
            case 3:
                queuePop(arrayQueue, count);
                break;
            case 4:
                emptyQueue(arrayQueue, count);
                break;
            case 5:
                break;
            default:
                cout<<"Wrong choice entered."<<endl;
                break;
        }
    }while(choice != 5);
}