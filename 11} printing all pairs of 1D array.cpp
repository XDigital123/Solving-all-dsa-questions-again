#include<iostream>
using namespace std; 

int main() {
   int arr[] = {10,20,30};
   int size= sizeof(arr)/sizeof(arr[0]);
   
   // printing all pairs of 1D array
   for(int i=0; i<size; i++) {
      for(int j=0; j<size; j++) {
   // yha hum arr[i][j] nhi likh skte kyunki wo 2D array mai likhte hai 
   // ye 1D array hai isme jaise niche wali line mai likha  hai waise likhte hai 
       cout<<arr[i]<<", " <<arr[j]<<endl;
      }
   }

   return 0;
}