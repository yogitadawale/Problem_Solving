// print the reverse an array.
#include<iostream>
using namespace std;
void reverse_an_array(int arr[], int n)
{
    int start = 0;
    int end = n -1;
    while(start<end){
        swap(arr[start],arr[end]);
            start++;
            end--;

    }

}


void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i];
}
}
int main(){
    int arr [] = {4,5,6,7,2,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    cout<<endl;
    reverse_an_array(arr,n);
    printArray(arr,n);
    return 0;
}