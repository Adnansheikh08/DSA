#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return sum(n-1)*n;
    }
}
int main()
{
    int ans=sum(0);
     cout<<"The answer is= "<<ans<<endl;
}