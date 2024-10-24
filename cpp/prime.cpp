#include <iostream>
using namespace std;
int main()
{
  int n ;
  cout<<"Enter N Umbers:";
  cin>>n;
  bool isPrime = true;
  if(n<=1)
   isPrime = false;
   else{
    for(int i = 2; i<=n; i++)
    {
      if(n % i == 0)
        isPrime = false;
      break; 
    }
   }
    if(isPrime)
    {
      cout<<"true";
    }
    else{
      cout<<"false";
    }
   
   return 0;
}
