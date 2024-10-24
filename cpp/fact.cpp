// Calculate the factorial of number N.
#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    if(n==0 || n==1)
       {
        return 1;
       }
    else
       {

    for(int i=2; i<=n; i++)
       {
        fact = fact*i;
       }
    return fact;
       }
}


int main(){
int n;
cout<<"Enter the n number:";
cin>>n;
cout<<factorial(n);
return 0;

}
// #include <iostream>
// using namespace std;
// int main(){
//  int n ;
//  int fact;
//  cout<<"Enter the n number:";
//  cin>>n;
//  for(int i = 2; i<=n; i++)
//  {
//     int fact = fact*i;
//  }
//  cout<<"factorial="<<fact;
//  return 0;
//  }