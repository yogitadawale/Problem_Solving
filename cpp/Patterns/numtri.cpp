// print the triangle pattern of "*".
/*
1      i=0      logic =i+1=Star
22     i=1
333    i=2
4444   i=3
55555  i=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }

    return 0;
}