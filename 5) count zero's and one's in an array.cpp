#include<iostream>
using namespace std;

void countZeroOne(int arr[], int size) {
   int zeroCount = 0; 
   int oneCount = 0; 

   for(int i=0; i<size; i++) {
      if(arr[i] == 0) {
         zeroCount++;
      }
      if(arr[i] == 1) {
         oneCount++;
      }
   }

   cout<<"Zero count is : "<<zeroCount<<endl;
   cout<<"One count is : "<<oneCount<<endl;
}

int main() {

   int arr[] = {0,0,0,0,0,0,0,0,0,0,12,01,23,021,30,1232,02,3,0,0,0,0,10,10,10,1,0,101,0,1,1,1,1,1,1};
   int size = sizeof(arr)/ sizeof(arr[0]);
   countZeroOne(arr,size);
   return 0;
}