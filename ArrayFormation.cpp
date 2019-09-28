/* HackerEarth link :
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/circular-list-8e1319c9/
*/
#include<bits/stdc++.h>
using namespace std;
stack<int> s;
queue<int> q;
bool checkPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num%i==0)
        return false;
    }
    return true;
}
void insert(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(checkPrime(arr[i])){
        q.push(arr[i]);
        }
        else{
        s.push(arr[i]);
        }
        
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    insert(arr,n);
    int l=s.size();
    int k=q.size();
    for(int i=0;i<k;i++){
    cout<<q.front()<<" ";
    q.pop();
    }
    cout<<endl;
    for(int i=0;i<l;i++){
    cout<<s.top()<<" ";
    s.pop();
    }
    cout << endl;
    return 0;
}