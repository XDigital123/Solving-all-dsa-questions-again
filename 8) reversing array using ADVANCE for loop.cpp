#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {

   //reversing array using advance for loop 
  for(int left=0, right = size-1; left<=right; left++,right--) {
    swap(arr[left],arr[right]);
  }

   //printing 
   for(int i=0; i<size; i++) {
      cout<<arr[i]<<"  ";
   }
}

int main() {

   int arr[] = {10,20,30,40,50,60};
   int size = sizeof(arr)/ sizeof(arr[0]);
  reverseArray(arr,size);
   return 0;
}