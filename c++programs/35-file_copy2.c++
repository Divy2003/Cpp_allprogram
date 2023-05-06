#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()                   //copy two file in one file
{   char c1,c2;
	ifstream fi;
	ifstream fii;
    ofstream fo;

    fi.open("std.txt");
    fii.open("v2.txt");
    fo.open("myfile.txt");
       
    while(fi.get(c1)){         
        fo.put(c1);
    }

    fi.close();
     while(fii.get(c2)){         
        fo.put(c2);
    }
    fii.close();
    fo.close();

    cout<<"Copy File Final Complate";
    return 0;
}