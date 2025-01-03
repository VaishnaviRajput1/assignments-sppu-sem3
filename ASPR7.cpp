#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> statepop;

    statepop["Maharashtra"]=12345789;
    statepop["Rajasthan"]=4562873;
    statepop["UP"]=809016750;
    statepop["MP"]=79810170;

    string statename;
    cout<<"Enter statename:\n";
    cin>>statename;

    if(statepop.count(statename)>0)
    {
        int population=statepop[statename];
        cout<<"The population of "<<statename<<" is "<<population;
    }
    else
    {
        cout<<"The state "<<statename<<" is not in the database.";
    }
    return 0;
}