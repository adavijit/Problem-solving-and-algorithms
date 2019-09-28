/* HackerEarth link :
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<char, int> mp; 
    mp.insert({ '(', 1 }); 
    mp.insert({ ')', 2 }); 
    mp.insert({ '{', 5 }); 
    mp.insert({ '}', 6 });
    mp.insert({ '[', 9 });
    mp.insert({ ']', 10 });
    int n;
    cin >> n;
    while(n--)
    {
char s[1000];
     cin >> s;
    char c[1000];
    int top=-1;
    for(int i=0;i<strlen(s);i++)
    {
        if(top>-1 && mp.find(s[i])->second == mp.find(c[top])->second+1 && mp.find(s[i])->first != mp.find(c[top])->first )
        {
        top--;
        }
        else{
        c[++top]=s[i];
        }
    }

     if(top==-1){
    cout<<"YES" << endl;
    }
    else
    cout<<"NO"  << endl;
    
    }
     
    return 0;
}
