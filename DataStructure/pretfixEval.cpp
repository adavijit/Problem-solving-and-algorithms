#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<int> newStack;
    int len = s.length();
    int i=len-1;
    int x,y;
    while(len!=0)
    {
        if(s[i]!='*' && s[i]!='/' && s[i]!='-' && s[i]!='+')
        {
            newStack.push((int)s[i]);
        }
        else{
            switch (s[i])
            {
            case '+':
                x=(int)newStack.top()-48;
                newStack.pop();
                y=(int)newStack.top()-48;
                newStack.pop();
                newStack.push(x+y+48);
                break;
            case '-':
                x=(int)newStack.top()-48;
                newStack.pop();
                y=(int)newStack.top()-48;
                newStack.pop();
                newStack.push(x-y+48);
                break;
            case '*':
                x=(int)newStack.top()-48;
                newStack.pop();
                y=(int)newStack.top()-48;
                newStack.pop();
                newStack.push(x*y+48);
                break;
            case '/':
                x=(int)newStack.top()-48;
                newStack.pop();
                y=(int)newStack.top()-48;
                newStack.pop();
                newStack.push(x/y+48);
                break;
            default:
                break;
            }
        }
        len--;
        i--;
    }
    cout << (int)newStack.top()-48; 
    return 0;
}