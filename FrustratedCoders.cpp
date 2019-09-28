/* HackerEarth link :
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/sniper-shooting/
*/
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    int top=-1;
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=brr[top])
        {
            //brr[top]=arr[i];
            for (int j = top; i >=0; i--)
            {
                if(brr[j]<arr[i]){
                    brr[j]=arr[i];
                    c=1;
                    break;
                }
                
            }
            if(c!=1)
            brr[++top]=arr[i];
            
        }
        else
        {
            brr[++top]=arr[i];
        }
    }
    cout << top;
    // for (int i = 0; i < top+1; i++)
    // {
    //    cout << brr[i];
    //    cout << "AS";
    // }
     cout << "D";
    
    

    return 0;
}