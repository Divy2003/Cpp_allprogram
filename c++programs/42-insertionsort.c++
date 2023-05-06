#include <iostream>
using namespace std;
int main(){
int i,n,temp,j,a[20],key;
cout<<"enter total number of element";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++){
    cin>>a[i];
}  
for(i=1;i<n;i++){
    j=i;
    while(j>0 && a[j]<a[j-1]){
        temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        j--;
    }
}  
cout<<"after storing element";
for(i=0;i<n;i++)
cout<<a[i];
return 0;
}