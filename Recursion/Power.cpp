#include <iostream>
using namespace std;
int pow(int m,int n)
{
    if(n==0)
    return 1;
    else
    {
        return pow(m,n-1)*m;
    }
}
int main()
{
    int m,n;
    cout<<"Enter the base number: ";
    cin>>m;
    cout<<"Enter the Power to be raised"<<endl;
    cin>>n;
    int ans=pow(m,n);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}