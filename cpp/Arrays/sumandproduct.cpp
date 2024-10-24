//calculate the sum and product of array.
#include<iostream>
using namespace std;
int calculateSum(int arr[], int n){
    int sum_ = 0;
    for(int i=0;i<n;i++)
    {
        sum_ =  sum_ + arr[i];
    }
    return sum_;

}

int calculateProduct(int arr[],int n)
{
    int product = 1;
    for(int i=0;i<n;i++)
        {
        product = product * arr[i];
        }
   return product;

}

int main(){
    int arr[] = {4,5,6,7,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<calculateSum(arr,n);
    cout<<endl;
    cout<<calculateProduct(arr, n);
    return 0;
}