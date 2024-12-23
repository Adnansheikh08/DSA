#include <iostream>
using namespace std;
bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
    bool ans=isSorted(arr+1,size-1);
    return ans;
    }
}
bool binarySearch(int *arr,int s,int e,int k)
{
    if(s>e)
    {
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }
    if(arr[mid]>k)
    {
        return binarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    bool ans=isSorted(arr,5);
    if(ans)
    {
        cout<<"present or not "<<binarySearch(arr,0,5,4)<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}