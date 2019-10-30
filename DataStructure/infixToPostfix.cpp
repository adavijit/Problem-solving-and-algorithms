#include<bits/stdc++.h>
using namespace std;
bool hasHigherPrec(char top,char next)
{
    map<char,int> m;
    m['+']=1;
    m['-']=1;
    m['*']=2;
    m['/']=2;

    if(m[top] >= m[next])
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    stack<char> newStack;
    string s;
    cin >> s;
    int i=0;
    int len=s.length();
    char finalString[len];
    int c=0;
    while(len!=0)
    {
        if(s[i]!='*' && s[i]!='/' && s[i]!='-' && s[i]!='+')
        {
            finalString[c]= s[i];
            c++;
        }
        else{
        if(newStack.empty())
        {
            newStack.push(s[i]);
            //cout<<s[i]<< " ok"<<endl;
        }
        else{
            while(!newStack.empty()&&hasHigherPrec(newStack.top(),s[i]))
            {
                finalString[c]= newStack.top();
                c++;
                newStack.pop();
            }
            newStack.push(s[i]);
        }
        }
        i++;
        len--;
    }
    while(!newStack.empty())
    {
        finalString[c]= newStack.top();
        c++;
        newStack.pop();
    }
    cout << finalString;
    return 0;
}