#include <iostream>
using namespace std;
void reverse(string &s,int i,int j)
{
    if(i>j)
    {
        return;
    }
    else{
        swap(s[i],s[j]);
        reverse(s,i+1,j-1);
    }
}
int main()
{
    string s="Adnan";
    int i=0,j=s.length()-1;
    reverse(s,i,j);
    cout<<s<<endl;
}