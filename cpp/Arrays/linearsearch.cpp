//LinearSearch
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            index = i;
        }
    }
    return index;
    }

int main(){
    int arr[] = {2,5,7,3,8,9};
    int n = sizeof(arr) /sizeof(arr[0]);
    cout<<linearSearch(arr,n,3);
    return 0;
}