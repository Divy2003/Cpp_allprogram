#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char product[20];
    int price;
    cout << "Enter product name=";
    cin >> product;
    cout << "Enter price=";
    cin >> price;
    ofstream outfile("std.txt");
    outfile << product << endl;
    outfile << price;
    ifstream infile("std.txt");
    infile >> product;
    infile >> price;
    cout << product << endl;
    cout << price;
    
    outfile.close();
    infile.close();
return 0;
}