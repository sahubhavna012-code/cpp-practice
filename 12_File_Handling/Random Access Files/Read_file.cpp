#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("example.txt");
    cout<<fin.tellg();
    fin.seekg(4);
    cout<<fin.tellg();
    char a;
    fin>>a;
    cout<<a;
    fin.close();
        getch();
}