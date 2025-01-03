#include<iostream>
#include<unistd.h>
#include<cstring>
using namespace std;

static int front1=0;
class priorityq
{
    char name[10];
    int priority;

    public:
    void enqueue();
    void dequeue();
    void sort();
    void display();
}priq[5];

void priorityq::display()
{
    int i=1;
    int front=-1;
    cout<<"\tCustomer Name \tpriority ";
    do{
        front++;
        cout<<"Serving Customer :"<<priq[front].name<<"\t"<<priq[front].priority;
        i++;
    }while(front<4);
}

void priorityq::enqueue()
{
    int rear=-1;
    int size;
    for(int i=0;i<size;i++)
    {
        rear++;
        char nm[10];
        int pri;
        cout<<"\nEnter name of customer : ";
        cin>>nm;
        cout<<"\n Enter Priority :";
        cin>>pri;
        strcpy(priq[rear].name,nm);
        priq[rear].priority=pri;   
    }
}

void priorityq::dequeue()
{
    char ch[10]=" ";
    strcpy(priq[front1].name,ch);
    priq[front1].priority=0;
    front1++;
}

void priorityq::sort()
{
    int p;
    char nm[0];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1;j++)
        {
            if(priq[j].priority>priq[j+1].priority)
            {
                strcpy(nm,priq[j].name);
                p=priq[j].priority;

                strcpy(priq[j].name,priq[j+1].name);
                priq[j].priority=priq[j+1].priority;

                strcpy(priq[j+1].name,nm);
                priq[j+1].priority=p;

            }
        }
    }

}
int main()
{
    priorityq pq;

    int choice;
    do{
        cout<<"\n -----Queuw Ops----";
        cout<<"\tinsert\tsort\tdelete\tdisplay";
        cout<<"\nProvide your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                pq.enqueue();
                break;

            case 2:
                pq.sort();

            case 3:
                pq.dequeue();

            case 4:
                pq.display();
                break;

            default:
                cout<<"Invalid";
                break;
        }
    }while(1);
    return 0;
}
