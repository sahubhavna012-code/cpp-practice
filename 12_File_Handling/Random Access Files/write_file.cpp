#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fin;
    fin.open("example.txt",ios::app);
    cout<<fin.tellp();
    fin.seekp(-1);
    cout<<fin.tellp();
    fin<<"institute";
    fin<<"ssipmt";
    fin<<"raipur";
    fin.close();
        getch();
}