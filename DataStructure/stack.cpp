#include<bits/stdc++.h> 
using namespace std;
int top=-1;
void push(int* array )
{
    if(top >9)
    {
        cout << "Stack overflow"<< endl;
    }
    else{
    cout << "enter element : ";
    int n; 
    cin >> n;
    array[++top]=n;
    }
}
void pop()
{
    if(top<0)
    {
        cout << "Stack underflow"<< endl;
        return;
    }
    else{
    top--;
    cout << "Popped from stack " << endl;
    }
}
void display(int* array)
{
    cout << "The updated stack is : " << endl;
    for(int i =0;i<top+1;i++ )
    cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int stack[10]; // Stack size is 10
    while(1)
    {
        cout << "1. Push into stack"<< endl << "2. Pop from stack" << endl << "3. Display stack" << endl << "4. Stop" << endl;
        cout << "enter choice:";
        int ch;
        cin >> ch; 
        switch (ch)
        {
        case 1:
            push(&stack[0]);
            break;
        case 2:
            pop();
            break;
        case 3:
            display(&stack[0]);
            break;
        case 4:
            break;
        }
    }
}