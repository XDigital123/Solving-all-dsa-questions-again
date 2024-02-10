#include<iostream>
#include<limits.h>
using namespace std;

int findMinimum(int arr[], int size) {
 int minimumNum = INT_MAX;
 for(int i=0; i<size; i++) {
   if(arr[i] < minimumNum) {
      minimumNum = arr[i];
   }
 }

 return minimumNum;
}

int main() {

   int arr[] = {12,1,23,30,1232,300,23,5,1213,26,352,525,64,236,89,759,48567,894,847969,1234,9999,65652,123};
   int size = sizeof(arr)/ sizeof(arr[0]);
   int minimum = findMinimum(arr,size);
   cout<<"Minimum number is : "<<minimum<<endl;
   return 0;
}