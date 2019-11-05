/*
https://www.hackerearth.com/problem/algorithm/find-prime/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t!=0)
    {
    int l,r;
    cin >> l >> r;
    int c=0;
    for(int k=l;k<=r;k++)
    {
        if(k==1)
        continue;
        int f=0;
        for (int i = 2; i <= sqrt(k); i++)
        {
        if(k%i==0)
        {
            f=1;
            break;
        }
        }
        if(f==0)
        c++;
    }
    cout << c << endl;
    t--;
    }
    
    
    
    
    return 0;
}