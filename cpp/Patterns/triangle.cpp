// print the triangle pattern of "*".
/*
*      i=0      logic =i+1=Star
**     i=1
***    i=2
****   i=3
*****  i=4
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
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}