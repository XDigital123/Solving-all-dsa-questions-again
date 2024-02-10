#include<iostream>
#include<limits.h>
using namespace std;

int findMaximum(int arr[], int size) {
 int maximumNum = INT_MIN;
 for(int i=0; i<size; i++) {
   if(arr[i] > maximumNum) {
      maximumNum = arr[i];
   }
 }

 return maximumNum;
}

int main() {

   int arr[] = {12,1,23,30,1232,300,23,5,1213,26,352,525,64,236,89,759,48567,894,847969,1234,9999,65652,123};
   int size = sizeof(arr)/ sizeof(arr[0]);
   int maximum = findMaximum(arr,size);
   cout<<"Maximum number is : "<<maximum<<endl;
   return 0;
}