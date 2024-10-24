//maximum from two numbers.
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    if(a<b)
        {
        cout<<"b is grether";
        } 
    else if (a>b)
        {
        cout<<"a is greater"; 
        }
    else
        {
            cout<<"can not be determined"; 
        }
    return 0;
}