/* HackerEarth link :
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/super-reduced-strings-303701dd/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin >> s;
    char c[1000];
    int top=-1;
    for(int i=0;i<strlen(s);i++)
    {
        if(top>-1 && s[i]==c[top])
        {
        top--;
        }
        else{
        c[++top]=s[i];
        }
    }
    if(top==-1){
    cout<<"Empty String";
    }
    else
    for(int i=0;i<=top;i++){
    cout<<c[i];
    }
   
    
    return 0;
}
