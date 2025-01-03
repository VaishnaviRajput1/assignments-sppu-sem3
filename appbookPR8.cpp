#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:
    char start[10];
    char end[10];
    char min[10];
    char max[10];
    bool booked;
    A *next;
}*Head;

class app
{
    A *Node;
    public:
    A* createapp(A *head);
    void displayapp(A *head);
    void bookapp(A *head);
    void cancelapp(A *head);
};

A* app::createapp(A *head)
{
    A *newnode,*temp;
    int slot=1;
    int size=3;
    for(int i=0;i<size;i++)
    {
        newnode=new A;
        cout<<"\nFor Slot :"<<slot;
        cout<<"\nEnter start time :";
        cin>>newnode->start;

        cout<<"\nEnter end time :";
        cin>>newnode->end;

        strcpy(newnode->min,"1 Hour");
        strcpy(newnode->max,"2 Hours");

        newnode->booked=false;
        newnode->next=NULL;
        slot++;
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
    return head;
}

void app::displayapp(A *head)
{
    A *tmp;
    int slot=1;
    cout<<"\n--------------Appointment Schedule--------------";
    cout<<"\n |Sr.| |Start| |End| |Min| |Max| |Status|";
    tmp=head;
    while(tmp!=NULL)
    {
        cout<<"\n "<<slot;
        cout<<" "<<tmp->start;
        cout<<" "<<tmp->end;
        cout<<" "<<tmp->max;
        if(tmp->booked)
            cout<<"Booked";
        else
            cout<<"Free";

        slot++;
        tmp=tmp->next;
    }
}

void app::bookapp(A *head)
{
    char time[10];
    A *temp;
    cout<<"\nEnter time to booke appointment :";
    cin>>time;
    temp=head;
    while(temp!=NULL)
    {
        if(strcmp(time,temp->start)==0)
        {
            if(temp->booked==false)
            {
                temp->booked=true;
                cout<<"\nAppointment booked successfully!";
                break;
            }
            else
            {
                cout<<"\nThe appointment is already booked";
            }
        }
        else
        {
            temp=temp->next;
        }
    }
    if(temp==NULL)
        {
            cout<<"\n No such slot available...";
        }
}

void app::cancelapp(A *head)
{
    char time[10];
    A *temp;
    cout<<"\nEnter time to cancel appointment :";
    cin>>time;
    temp=head;
    while(temp!=NULL)
    {
        if(strcmp(time,temp->start)==0)
        {
            if(temp->booked==true)
            {
                temp->booked=false;
                cout<<"\nAppointment cancelled successfully!";
                break;
            }
            else
            {
                cout<<"\nThe appointment is already free...";
            }
        }
        else
        {
            temp=temp->next;
        }
    }
    if(temp==NULL)
    {
        cout<<"\nNo such slot exists...";
    }
}

int main()
{
    cout<<"\n-----------Appointment Schedule---------------";
    Head=NULL;
    app a1;
    Head=a1.createapp(Head);
    a1.displayapp(Head);
    a1.bookapp(Head);
    a1.displayapp(Head);
    a1.bookapp(Head);
    a1.displayapp(Head);
    a1.cancelapp(Head);
    a1.displayapp(Head);
}