// square pattern n = 4.
/*  1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
*/

// no of lines = outer loop
// no of numbers(logic) = Inner loop

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i<n; i++)
       {
         cout<<endl;

        for(int j = 0; j<n;  j++)
        {
            cout<<j<< " ";
        }
       }
       
return 0;
}