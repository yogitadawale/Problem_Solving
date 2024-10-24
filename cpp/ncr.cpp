// find the binomial coeffient for n and r. farmula=nCr=n!/r!(n-r)!
#include<iostream>
using namespace std;
int factorial(int n)
 {  int fact = 1;
    for(int i = 1; i<n; i++){
        fact = fact * i;
    }
    return fact;
 }
 int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(n);
    int fact_nr = factorial(n-r);
    return fact_n/fact_r * fact_nr;
 }

 int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
     int r;
    cout<<"Enter r : ";
    cin>>r;
    int factnCr = nCr(n,r);
    cout<<"nCr : "<<factnCr;
    return 0;

 }