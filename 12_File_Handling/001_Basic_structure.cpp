#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("example.txt");
    file << "Hello, World!" << endl;
    file.close();
    return 0;
}