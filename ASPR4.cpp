#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outputFile("sample.txt");

    outputFile<<"write some data in sample file\n";
    outputFile<<"write another line\n";

    outputFile.close();

    ifstream inputFile("sample.txt");
    
    string line;
    while(getline(inputFile,line))
    {
        cout<<line;
    }

    inputFile.close();
}