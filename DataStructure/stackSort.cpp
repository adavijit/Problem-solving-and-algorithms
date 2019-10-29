#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> input;
    input.push(5);
    input.push(3);
    input.push(1);
    input.push(7);
    input.push(4);
    input.push(2);
    
    stack<int> tempStack;
    while(!input.empty())
    {
        int temp = input.top();
        input.pop();
        while(!tempStack.empty() && temp<tempStack.top())
        {
            input.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    while(!tempStack.empty())
    {
        cout << tempStack.top() << " "; 
        tempStack.pop();
    }
    

    return 0;
}