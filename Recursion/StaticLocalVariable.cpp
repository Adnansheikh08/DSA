// Local Variable
// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if(n>0)
//     {
//      return fun(n-1)+n; // local variable 
//     }
//     return 0;
// }
// int main() {
//     int x=5;
//     int ans=fun(x); // 15
//     cout<<ans<<endl;
//     return 0;
// }


// Static Variable 
#include <iostream>
using namespace std;
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
     x++;    
     return fun(n-1)+x;
    }
    return 0;
}
int main() {
    int x=6;
    int ans=fun(x);//36
    cout<<ans<<endl;
    return 0;
}