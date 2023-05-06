#include <iostream>
#include <fstream>
using namespace std;

int main()
{   char ch;
	ofstream fout;             //tellp for know current position of pointer in write file
	

    fout.open("std.txt",ios::app);   /*if we dont use ios::app then file data errase and write 'indus' at starting
                                          if we use it then it write after wrriten data 
                                                              
    */
   
   cout<<fout.tellp();

    fout<<"indus";                    //write in file

  cout<<fout.tellp();          //now position at 5 ,start from 0 where we start new write
    
    fout.close();

    
    return 0;
}