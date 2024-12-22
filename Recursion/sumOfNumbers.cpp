#include <iostream>
using namespace std;
int sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n;
    }
}
int main()
{
    int ans=sum(3);
     cout<<"The answer is= "<<ans<<endl;
}