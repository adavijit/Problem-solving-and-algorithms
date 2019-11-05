/*
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/description/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    
    for (int k = 2; k <= n; k++)
    {
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
    {
        cout << k << " ";
    }
    
          
    }
 
 
    
    
    
    
    return 0;
}