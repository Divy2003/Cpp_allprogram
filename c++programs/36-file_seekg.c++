#include <iostream>          //seekg for read file
#include <fstream>
using namespace std;

int main()
{   char ch;
	 ifstream fi;
	
    fi.open("std.txt");

    cout<<fi.tellg();

    cout<<endl<<(char)fi.get();               //read file and print,so pointer go at 1
    cout<<endl<<(char)fi.get()<<endl;         //read file and print,so pointer go at 2
   
    cout<<fi.tellg()<<endl;                   //get pointer at2
     fi.seekg(5);                             //seekg move pointer to at 5 position
    
    cout<<fi.tellg();                         //tellg for know current position of pointer
    cout<<endl<<(char)fi.get();               //get for read and print char 

    
    return 0;
}