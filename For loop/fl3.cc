#include <iostream>
using namespace std;
int main(){
   int arr[]={21,9,56,99, 202};
   /* We have set the value of variable i
    * to 0 as the array index starts with 0
    * which means the first element of array 
    * starts with zero index.
    */
   for(int i=0; i<5; i++){
      cout<<arr[i]<<endl;
   }
   return 0;
}