#include<iostream>
using namespace std; 

int main() {
   int arr[] = {10,20,30};
   int size= sizeof(arr)/sizeof(arr[0]);
   
   // printing all triplets of 1D array
   for(int i=0; i<size; i++) {
      for(int j=0; j<size; j++) {
         for(int k=0; k<size; k++) {
            cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<", "<<endl;
         }
      }
   }

   return 0;
}