 #include<fstream>              //this prog for make new file and write 
 #include<iostream>
using namespace std;

 int main(){
string st;
ofstream fout;
fout.open("myfile.dat");
    cout<<"enter text";
    cin>>st;
fout<<st;
fout<<345;      //if we do not colse file then "hello" will not store in hard disk
fout.close();
return 0;
 }

