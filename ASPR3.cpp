#include<iostream>
using namespace std;

class publication
{
    string title;
    int price;

    public:
    publication()
    {
        title="";
        price=0;
    }

    void input_data()
    try
    {
        cout<<"Enter title:\n";
        cin>>title;
        cout<<"Enter price:\n";
        cin>>price;
    }
    catch(...)
    {
        title="";
        price=0;
        cout<<"Invalid Input...\n";
    }

    void display_data()
    {
        cout<<"Title:\n "<<title;
        cout<<"Price:\n "<<price;
    }
};

class Book:public publication
{
    int page_count;

    public:
    Book():publication()
    {
        page_count=0;
    }

    void input_data()
    {
        publication::input_data();
        try
        {
            cout<<"Enter page count\n";
            cin>>page_count;
        }
        catch(...)
        {
            page_count=0;
            cout<<"Invalid input\n";
        }
    }

    void display()
    {
        publication::display_data();
        cout<<"Page_count:\n "<<page_count;
    }
};

class Tape:public publication
{
    int play_time;

    public:
    Tape():publication()
    {
        play_time=0;
    }
    void input_data()
    {
        try
        {
        publication::input_data();
        cout<<"Enter playing time\n ";
        cin>>play_time;
        }
        catch(...)
        {
            play_time=0;
            cout<<"Invalid Input\n";
        }
    }

    void display_data()
    {
        publication::display_data();
        cout<<"Play Time:\n "<<play_time;
    }
};

int main()
{
    try{
    Book b;
    Tape t;

    cout<<"Enter book details:\n";
    b.input_data();

    cout<<"Enter Tape details\n";
    t.input_data();

    cout<<"Book details:\n";
    b.display_data();

    cout<<"Tape details:\n";
    t.display_data();
    }

    catch(exception &e)
    {
        cout<<"Exception caught\n"<<e.what();
    }
}