#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in;
    string st,st1;

    in.open("004_while.cpp");

    while(getline(in,st))
    {
        cout<<st<<endl;
    }
    
    return 0;
}