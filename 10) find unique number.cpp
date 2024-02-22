#include<iostream>
using namespace std; 

//find unique number 
int findUniqueNumber(int arr[], int size) {
   int ans = 0; 
   for(int i=0; i<size; i++) {
      ans = ans^arr[i];
   }
   return ans;
}

int main() {
   int arr[] = {2,10,11,13,10,2,15,13,15};
   int size= sizeof(arr)/sizeof(arr[0]);
   int uniqueNumber = findUniqueNumber(arr,size);
   cout<<"Unique number is : "<<uniqueNumber<<endl;

   return 0;
}