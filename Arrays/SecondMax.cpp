#include<iostream>
using namespace std;
int main()
{
    int n;
    int max=0;
    int smax=0;
    cout<<"Enter the Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"Maximum Element is "<<max<<endl;
    cout<<"Second Maximum Element is "<<smax<<endl;
    return 0;
}