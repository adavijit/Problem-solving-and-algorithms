#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}
void bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
    printArray(arr,n);
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
    bubbleSort(arr,n);
    
    return 0;
}