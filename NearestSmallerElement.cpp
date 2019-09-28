/* HackerEarth link :
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/nearest-smaller-element-929558b4/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    int top=-1;
    //brr[0]=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] < brr[top])
        {
            brr[top]=-1;
            brr[++top]=arr[i];
       
        }
        else{
            brr[++top]=arr[i];
        }
    }
    brr[++top]=-1;
    for (int i = 0; i < top; i++)
    {
       cout << brr[i];
    }
    
}