/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/little-monk-and-balanced-parentheses/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,max=0;
    cin >> n;
    int op=0;
    int arr[n];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       if(st.empty())
       {
           st.push(arr[i]);
           if(op>1){
               op=0;
               if(c>max)
               max=c;
           }
           op=1;
           continue;
       }
       if(0-(st.top())==arr[i] && (st.top() >0 || 0-(st.top())!=arr[i] )  )
       {

           if(op-1==0)
           {
               c=c+2;
           }

           st.pop();
           
       }
       else{

                op=1;
               if(c>max)
               max=c;
        

           st.push(arr[i]);
       }
    }
    //cout << max;
    cout << c;
    

    
    return 0;
}