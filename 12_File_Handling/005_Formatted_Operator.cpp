#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("data.txt");

    int age=20;
    float marks=85.5;

    file<<age<<" "<<marks;
    file.close();
}