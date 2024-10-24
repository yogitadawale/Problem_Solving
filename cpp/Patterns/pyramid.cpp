/*
        1 1
      1 2 2 1
    1 2 3 3 2 1
  1 2 3 4 4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        //space  (n-i-1)

        for(int j=0;j<n-i-1;j++)
            {
             cout<<"  ";
            }
            // nums1
            for(int j=1;j<i+1;j++)
                    {
                     cout<<j<<" ";
                    }
            //nums2
            for(int j=i;j>=1;j--)
                {
                     cout<<j<<" ";
                }
        cout<<endl;

    }
    return 0;
}