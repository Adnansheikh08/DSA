#include <iostream>
using namespace std;
int Taylor(int x,int n)
{
    static int p=1;
    static int f=1;
    int r;
    if(n==0)
    {
        return 1;
    }
    else{
        r=Taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
    int m,n;
    cout<<"Enter the base number: ";
    cin>>m;
    cout<<"Enter the Power to be raised"<<endl;
    cin>>n;
    int ans=Taylor(m,n);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}