#include <iostream>
using namespace std;
int main(){
int i,n,temp,j,a[20],min;
cout<<"enter total number of element";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++){
    cin>>a[i];
}  
for(i=0;i<n;i++){
    min=i;
    for(j=i+1;j<n;j++){
    if(a[j]<a[min]){

      temp=a[j];
      a[j]=a[min];
      a[min]=temp;}
      }
}  
cout<<"after storing element";
for(i=0;i<n;i++)
cout<<
a[i];
return 0;
}