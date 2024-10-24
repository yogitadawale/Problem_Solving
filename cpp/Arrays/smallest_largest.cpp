// print smallest and largest value  and also print the index of that value from the array.
#include<iostream>
#include <limits.h>
using namespace std;
int smallest_num(int arr1[], int n)
{  
  int smallest = INT_MAX;
  int index = -1;
    for(int i=1;i<n;i++)
    {
        if(smallest > arr1[i]){
            smallest = arr1[i]; 
            index = i; 

        }
    }
    return index; //print index of value.
    // return smallest;   //print only value.
}

int largest_num(int arr2[], int n){
  int largest = INT_MIN;
  int index = -1;
  for(int i=0;i<n;i++)
  {
    if(largest<arr2[i])
    {
      largest = arr2[i];
      index = i;  //update index.
    }
  }


// return largest;
return index;

}
  int main(){
    int arr1[] = {2,1,7,8,9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout<<"smallest: "<<smallest_num(arr1,n);
    cout<<endl;
    cout<<"Largest: "<<largest_num(arr1,n);

    return 0;
  }