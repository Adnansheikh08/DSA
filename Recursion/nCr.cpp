#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int nCr(int n,int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"Answer= "<<nCr(n,r)<<endl;
    return 0;

}