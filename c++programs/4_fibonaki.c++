#include <iostream>
using namespace std;
int fib(int x) {
   if(x<=1) {
      return(x);                               //using recurtion

   }else {
      return(fib(x-1)+fib(x-2));                 //function ke andar again same function call konwn as recu...
   }
}
int main() {
   int x , i;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "Fibonnaci Series : ";
   for(i=0;i<x;i++)
   cout<<" "<<fib(i);
   //while(i < x) {
   //   cout << " " << fib(i);
   //   i++;
   return 0;
}


//#include<iostream>
//using namespace std;
//int main(){
//
//    int n1=0,n2=1,n3,i;
//    cout<<n1<<n2;
//     
//    for(i=1;i<=10;i++)
//    {
//
//       n3=n1+n2;
//     
//       n1=n2;
//       n2=n3;
//          cout<<n3;
//    }
//return 0;
//} 