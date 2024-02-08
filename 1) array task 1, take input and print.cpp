#include<iostream>
using namespace std;

int main() {

   //create an array size 10
   int arr[10];

   //taking input in that array
   for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
      cin>>arr[i];
   }

   //printing the array 
   for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
      cout<<arr[i]<<"  ";
   }
   return 0;
}