#include <iostream>
using namespace std;
// This is a global variable
char myVar = 'A';
char myFuncn() {
   // This is a local variable
   char myVar = 'B';
   return myVar;
}
int main()
{
   cout <<"Funcn call: "<< myFuncn()<<endl;
   cout <<"Value of myVar: "<< myVar<<endl;
   myVar='Z';
   cout <<"Funcn call: "<< myFuncn()<<endl;
   cout <<"Value of myVar: "<< myVar<<endl;
   return 0;
}