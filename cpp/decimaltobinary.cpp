#include<iostream>
using namespace std;
int decToBinary(int decnum){
    int ans = 0, pow = 1;
    while(decnum > 0){
        int rem = decnum % 2;
        decnum = decnum/2;
        ans = ans + rem * pow;
        pow = pow * 10;
    }
return ans; //binary form
}
int main(){
    int decnum;
    cout<<"Enter decNum : ";
    cin>>decnum;
    cout<<"Binary form : "<<decToBinary(decnum);
    return 0;

     

}