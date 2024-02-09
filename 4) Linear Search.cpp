#include<iostream>
using namespace std;


bool linearSearch(int arr[], int size, int target) {
   for(int i=0; i<size; i++) {
      if(arr[i] == target) {
         return true;
      }
   }
   return false;
}
int main() {

   //linear search
   int arr[] = {10,20,30,40,50,60,70,80,90,100};
   int size = sizeof(arr)/ sizeof(arr[0]);
   int target;
   cout<<"Enter a number to search : ";
   cin>>target;

   bool ans = linearSearch(arr,size,target);
   cout<<ans<<endl;
   if(ans == 1) {
      cout<<"Target found";
   }
   else {
      cout<<"Target not found";
   }

   return 0;
}