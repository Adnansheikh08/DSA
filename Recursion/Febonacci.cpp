#include<iostream>
using namespace std;
int febonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return febonacci(n-1)+febonacci(n-2);
    }
}
int main()
{
    cout<<"Enter the Number"<<endl;
    int n;
    cin>>n;
    int result=febonacci(n);
    cout<<"The Answer is "<<result<<endl;
    return 0;

}