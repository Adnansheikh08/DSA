#include <iostream>
using namespace std;
bool Palindrome(string s,int i,int j)
{
    if(i>j)
    return true;
    if(s[i]!=s[j])
    return false;
    else{
        return Palindrome(s,i+1,j-1);
    }
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(Palindrome(s,0,s.size()-1))
    cout<<"String is a palindrome";
    else
    cout<<"String is not a palindrome";
}