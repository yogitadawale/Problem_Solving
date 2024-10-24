//calculate the sum of digit.
#include<iostream>
using namespace std;
int sumDigits(int num ){
    int digitSum = 0;
    while(num > 0){
        int lastdigit = num%10;
        num = num/10;
        digitSum = digitSum + lastdigit;
    }
         return digitSum; 

}
 int main(){
    cout<<"sum = "<<sumDigits(123);
    return 0;
 }