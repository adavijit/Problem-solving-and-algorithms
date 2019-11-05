#include<bits/stdc++.h>
using namespace std;
int arr[10];
int n;
void merge(int arrL[],int arrR[],int nL,int nR)
{
    int i=0,j=0,k=0;
    while ( i < nL && j < nR)
    {
        if(arrL[i]<=arrR[j])
        {
            arr[k]=arrL[i];
            i++;
        }
        else{
            arr[k]=arrR[j];
            j++;
        }
        k++;
    }
    while (i < nL)
    {
       arr[k]=arrL[i];
       i++;
       k++;
    }
    while (j < nR)
    {
       arr[k]=arrR[j];
       j++;
       k++;
    }
}
void MergeSort(int arr[],int n)
{
    if(n<2)
    return;
    int mid = n/2;
    int arrL[mid];
    int arrR[n-mid];
    for (int i = 0; i < mid; i++)
    {
        arrL[i]=arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        arrR[i-mid]=arr[i]; 
    }
    MergeSort(arrL,mid);
    MergeSort(arrR,n-mid);
    merge(arrL,arrR,mid,n-mid);

}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}