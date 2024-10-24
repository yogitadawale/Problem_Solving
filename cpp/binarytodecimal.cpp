//convert binary to decimal.
#include<iostream>
using namespace std;
int binaryToDecimal(int binum)
    {
    int ans = 0, pow = 1;
    while(binum > 0){
        int rem = binum % 10;
        ans = ans + rem * pow;
        binum = binum / 10;
        pow = pow * 2;
    }
return ans;
}

int main()
{
    cout<<binaryToDecimal(1111000001)<<endl;
    return 0;
}