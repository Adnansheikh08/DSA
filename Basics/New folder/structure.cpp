#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
}r1,r2,r3;

int main()
{
    r1={10,12};
    cout<<"Area="<<(r1.length*r1.breadth)<<endl;
    return 0;
}