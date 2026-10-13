#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream file;

    file.open("example.txt");

    string str;

    file>>str;

    cout<<str;

    file.close();

    return 0;
}