#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{   char c;
	ifstream fi;
	ofstream fo;

    fi.open("std.txt");
    fo.open("v2.txt");

       
   // while(fi.get(c)){         
   //     fo.put(c);
   // }
    
    while(fi.get(c)){
        if(islower(c)){
            c=c-32;
        }
        fo.put(c);
    }

    fi.close();
    fo.close();

    cout<<"Copy File Final Complate";
    return 0;
}