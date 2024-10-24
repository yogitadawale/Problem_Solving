#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout<<"Enter the n:";
    cin>>n;
    int i=0;
    while(i< n)
    {
      sum = sum + i;
      i++;
    }
    cout<<"sum = " << sum;
return 0;
}