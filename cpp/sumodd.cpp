// Sum of all odd numbers from 1 to n.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout<<"Enter the n:";
    cin>>n;
    for(int i=1;i<=n;i++)
     {   if(n % 2 != 0)
            sum = sum + i;
            cout<<"sum = " << sum;
    
     }

return 0;
}