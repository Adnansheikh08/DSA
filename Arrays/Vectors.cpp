#include<iostream>
#include <vector>
#include <algorithm>
#include <limits.h> // For INT_MIN
using namespace std;
int main()
{
    int n;
     int max = INT_MIN; // Initialize to minimum integer value
    int smax = INT_MIN; // Initialize to minimum integer value
    cout<<"Enter the Size of Array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Elements of Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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