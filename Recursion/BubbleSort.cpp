#include<iostream>
using namespace std;
void SortArray(int arr[],int n )
{
    if(n==0 || n==1)
    {
        return ;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    SortArray(arr,n-1);
}
int main()
{
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    SortArray(arr,n);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        }
        return 0;
}