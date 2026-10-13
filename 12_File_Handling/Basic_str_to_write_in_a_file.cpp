#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream file;

    file.open("example.txt");

    file<<"Hello World";
}