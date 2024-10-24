#include<iostream>
using namespace std;
int prime(int n){
    bool isPrime = true;
    if(n<=1){
        isPrime = false;
    }
    for(int i=2;i<n;i++){
        if(n % i == 0){
            isPrime = false;
        }
        break;
    }
   if(isPrime)
   {
     cout<<"True";
   }
   else{
    cout<<"False";
   }
   return 0;
}
 

int main(){
    cout<<prime(5);
    return 0;

}