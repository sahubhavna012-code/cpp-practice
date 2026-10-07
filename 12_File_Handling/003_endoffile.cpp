#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in;
    string st,st2;
    in.open("example.txt");
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}