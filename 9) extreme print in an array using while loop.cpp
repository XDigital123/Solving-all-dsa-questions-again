#include<iostream>
using namespace std;

void extremePrint(int arr[], int size) {
int left = 0; 
int right = size-1; 

//extreme print in an array using while loop 
while(left <= right) {

   if(arr[left] == arr[right]) {
      cout<<arr[left];
   }
   else {
      cout<<arr[left]<<" ";
      cout<<arr[right]<<" ";
   }

   left++;
   right--;
}
}
  

int main() {

   int arr[] = {10,20,30,40,50,60,70};
   int size = sizeof(arr)/ sizeof(arr[0]);
  extremePrint(arr,size);
   return 0;
}