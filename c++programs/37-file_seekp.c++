#include <iostream>                //seekp for move position of put pointer 
#include <fstream>
using namespace std;

int main()
{   char ch;
	ofstream fout;
	cout<<"text enter";
    cin>>ch;

    fout.open("std.txt",ios::app);
  
    
    cout<<fout.tellp();
    //fout.put(ch);                    ////put for write in file 
                                             //put pointer at 0 now
    fout.seekp(5);                     //seekp move pointer to at 5 position
    
    cout<<fout.tellp();                 //tellp for know current position of pointer
                                                            

    
    return 0;
}