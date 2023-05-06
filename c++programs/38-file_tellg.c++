#include <iostream>
#include <fstream>
using namespace std;      //tellg for know current position of pointer in read file

int main()
{   char ch;
	ifstream fi;
	

    fi.open("std.txt");
  
             //get pointer at 0
  
    cout<<fi.tellg();
  
    fi>>ch;              //read file, so pointer go at 1 position
    
    cout<<fi.tellg();
    fi>>ch;
    
    cout<<fi.tellg();

    
    return 0;
}