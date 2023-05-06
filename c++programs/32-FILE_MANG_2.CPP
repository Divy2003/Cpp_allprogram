 #include<fstream>              //this prog for read the file 
 #include<iostream>
 #include<string.h>
using namespace std;

 int main(){
 ifstream fin;
 char ch[100];
 fin.open("myfile.dat");
 //fin>>ch; 
      //fin.getline(ch,10);
 //while(!fin.eof()){
 //   cout<<ch;         //for print charactor on screen
 //   fin>>ch;       //for read charactor in file
 //} 
    fin>>ch;
 cout<<ch;
 fin.close();
 return 0;
 }
