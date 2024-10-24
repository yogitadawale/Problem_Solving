#include<iostream>
#include<limits.h>
#include <algorithm>
using namespace std;

int swap_min(int arr[],int n){
    int Index_Min = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[Index_Min] > arr[i])
        {
            Index_Min = i;
        }
    }
    return Index_Min;
}


int calculate_max(int arr[],int n){
 int Index_Max = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[Index_Max] < arr[i])
        {
            Index_Max = i;

        }
    }
    return Index_Max;
 }

void swap_Min_Max(int arr[],int n){
    int Index_Min = swap_min(arr,n);
    int Index_Max = calculate_max(arr,n);

    swap(arr[Index_Min],arr[Index_Max]);
}

int main()
{
    int arr[] = {3,6,4,5,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    swap_Min_Max(arr, n);
    cout << "Array after swapping: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}