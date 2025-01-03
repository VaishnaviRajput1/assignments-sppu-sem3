#include<iostream>
using namespace std;

class DQ
{
    int Q[5];
    int front,rear,size;

    public:
    DQ()
    {
        front=-1;
        rear=-1;
        size=5;
        for (int i=0; i<size;i++)
        {
            Q[i]=0;
        }
    }

    void insert_at_rear(int val)
    {
        if(rear<size-1)
        {
            rear++;
            Q[rear]=val;
            cout<<"Inserted at rear:\n\n\t"<<Q[rear];
        }
        else
        {
            cout<<"Overflow: Queue is full...\n\n\t";
        }
    }

    void del_at_rear()
    {
        if(front!=rear)
        {
            rear--;
            Q[rear]=0;
            cout<<"Deleted at rear :\n\n\t"<<Q[rear];
        }
        else
        {
            cout<<"Queue is empty...";
        }
    }


    void del_at_front()
    {
        if(front!=rear)
        {
            front++;
            Q[front]=0;
            cout<<"\n\n\tDeleted from front : "<<Q[front];
        }
        else
        {
            cout<<"Queue is empty...";
        }
    }

    void insert_at_front(int val)
    {
        if(front>=0)
        {
            front--;
            Q[front]=val;
            cout<<"\n\n\tInserted at front:"<<Q[front];
        }
        else
        {
            cout<<"Overlflow : The queue is full";
        }
    }

    void show()
    {
        cout<<"\n\n\tQueue: |";
        for(int i=0;i<size;i++)
        {
            cout<<Q[i]<<"|";
        }
    }
};
int main()
{
    DQ d;

    cout<<"Initially:";
    d.show();

    d.insert_at_rear(101);
    d.show();

    d.insert_at_rear(102);
    d.show();

    d.insert_at_rear(103);
    d.show();

    d.del_at_rear();
    d.show();

    d.del_at_rear();
    d.show();

    d.insert_at_front(104);
    d.show();

    d.insert_at_front(105);
    d.show();

    d.del_at_front();
    d.show();

    return 0;
}