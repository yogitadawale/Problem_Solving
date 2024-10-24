#include<iostream>
using namespace std;
int printn(int n){
    int num = 1;
    for(int i=1;i<n;i++){
        cout<<num<<" ";
        num = num + 1;
    }
}
 
int main(){
    cout<<printn(5);
    return 0;
}