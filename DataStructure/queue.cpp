#include<bits/stdc++.h> 
using namespace std;
int front=0,rear=-1;
void enqueue(int* array )
{
    if(rear>10)
    {
        cout << "Queue is full"<< endl;
    }
    else{
    cout << "enter element : ";
    int n; 
    cin >> n;
    array[++rear]=n;
    }
}
void dequeue()
{
    if(rear<0)
    {
        cout << "Queue underflow"<< endl;
        return;
    }
    else{
    front++;
    cout << "Dequeue successfull " << endl;
    }
}
void display(int* array)
{
    cout << "The updated stack is : " << endl;
    for(int i =front;i<rear+1;i++ )
    cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int queue[10]; // queue size is 10
    while(1)
    {
        cout << "1. Enqueue"<< endl << "2. Dequeue" << endl << "3. Display" << endl << "4. Stop" << endl;
        cout << "enter choice:";
        int ch;
        cin >> ch; 
        switch (ch)
        {
        case 1:
            enqueue(&queue[0]);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(&queue[0]);
            break;
        case 4:
            break;
        }
       
    }
}