#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

struct Person
{
    string name;
    string dob;
    string ph;

    bool operator==(const Person& other) const{
        return name==other.name && dob==other.dob && ph==other.ph;
    }

    bool operator<(const Person& other)
    {
        if(name!=other.name)
        {
            return name < other.name;
        }
        else if(dob!=other.dob)
        {
            return dob<other.dob;
        }
        else{
            return ph<other.ph;
        }
    }
};

void printperson(const Person& person)
{
    cout<<"\nName :"<<person.name;
    cout<<"\nDOB :"<<person.dob;
    cout<<"\nPH :"<<person.ph;
}

void insertperson(vector<Person> persons)
{
    Person newperson;
    cout<<"\nEnter person name :";
    cin>>newperson.name;
    cout<<"\nEnter dob :";
    cin>>newperson.dob;
    cout<<"\nEnter ph :";
    cin>>newperson.ph;

    persons.push_back(newperson);
    
}


void searchperson(const vector<Person> persons)
{
    string nmtosearch;
    cout<<"\nenter name to select :";
    cin>>nmtosearch;
    
    auto it= find_if(persons.begin(),persons.end(), [&nmtosearch](const Person& person){
        return person.name==nmtosearch;
    });

    if(it != persons.end())
    {
        cout<<"name found";
        printperson(*it);
    }
    else{
        cout<<"name not found";
    }
}

int main()
{
    vector<Person> persons;

    int choice;
    do{
        cout<<"\n Select :";
        cout<<"\n 1.To Insert";
        cout<<"\n 2.To Search";
        cout<<"\n 3.To Exit";
        cout<<"\nEnter your choice :";
        cin>>choice;

        switch(choice)
        {
            case 1:
                insertperson(persons);
                break;
            case 2:
                searchperson(persons);
                break;
            case 3:
                cout<<"\nExit";
                break;
            default:
                cout<<"Invalis input..";
                break;
        }
    }while(choice!=3);
    
    return 0;

}