#include <iostream>
using namespace std;
int main(){
    int P,R,T;
    cout<<"Enter P: ";
    cin>>P;
    cout<<"Enter R: ";
    cin>>R;
    cout<<"Enter T: ";
    cin>>T;
    float simple_interest = (P*R*T)/100;
    cout<<simple_interest;
    return 0;
}
