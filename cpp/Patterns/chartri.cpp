// print the triangle pattern of "*".
/*
A                       logic = char('A'+ i - 1)
B B                      A = 65
C C C                    65+1-1 = 65=A      65+2-1 = 67-1 = 66 = B
D D D D
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<n;i++){
        // cout<<ch;
        for(int j=1;j<i;j++)
        {
            cout<<char('A'+ i - 1)<<" ";

        }
        cout<<endl;
    }

    return 0;
}