/*
A  B  C  
D  E  F  
G  H  I
J  K  L
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n:";
    cin>>n;
    char ch = 'A';
    for(int i = 0; i<n; i++)
    {
        for(char j = 1; j<n; j++){
            cout<<ch<<"  ";
            ch = ch + 1;
        }
          cout<<endl;
}
 return 0;
} 
 