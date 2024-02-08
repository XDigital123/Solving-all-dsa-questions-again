#include<iostream>
using namespace std;

int main() {

   //create an array size 10
   int arr[5];

   //taking input in that array
   for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
      cin>>arr[i];
   }

   //printing the total sum of an array 
   int sum = 0;
   for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
      sum = sum + arr[i];
   }

   cout<<"Total sum is : "<<sum<<endl;
   return 0;
}