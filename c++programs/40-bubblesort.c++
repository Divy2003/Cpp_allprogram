#include <iostream>
using namespace std;
int main(){
int i,n,temp,j,a[20];
cout<<"enter total number of element";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++){
    cin>>a[i];
}                     /*if 4 num of array 
                        then it has 4 case which is 'i',(column)
                        and in(each column) row total swaping is n-1 which is 'j'
                            */
for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){   
        if(a[j]>a[j+1]){

            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }  
}

cout<<"after storing element";
for(i=0;i<n;i++)
cout<<
a[i];

return 0;
}