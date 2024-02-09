#include<iostream>
using namespace std;


void printArray(int arr[], int size) {
   //printing array
   for(int i=0; i<size; i++) {
      cout<<arr[i]<<"  ";
   }
}
int main() {

   int arr[] = {10,20,30,40,50,60,70,80,90,100};
   int size = sizeof(arr)/ sizeof(arr[0]);
   printArray(arr,size);
   return 0;
}