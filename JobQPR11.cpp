#include<iostream>
#include<unistd.h>
using namespace std;

class jobq
{
    int q[5];
    int front;
    int rear;
    int size;

    public:
    jobq()
    {
        front=-1;
        rear=-1;
        size=5;
        for(int i=0;i<size;i++)
        {
            q[i]=0;
        }
    }

    int is_full()
    {
        if(rear==size-1)
            return 1;
        else
            return 0;
    }

    int is_empty()
    {
        if(front==rear)
            return 1;
        else
            return 0;
    }

    void add_job(int val)
    {
        if(!is_full())
        {
            rear++;
            q[rear]=val;
            cout<<"Add Job:\n\n\t"<< q[rear];
        }
        else
        {
            cout<<"Overflow: Queue is Full...\n\n\t";
        }
    }

    void show()
    {
        cout<<"Job Queue:";
        for(int i=0;i<size;i++)
        {
            cout<< q[i]<<",";
        }
    }

    void del_job()
    {
        if(!is_empty())
        {
            front++;
            q[front]=0;
            cout<<"Processing Job:\n\n\t"<< q[front]; 
            sleep(3);   
        }
        else
        {
            cout<<"Queue is empty...\n\n\t";
        }
    }
};

int main()
{
    jobq j;

    cout<<"Initially Queue:\n\n\t";
    j.show();

    j.add_job(101);
    j.show();

    j.add_job(102);
    j.show();

    j.add_job(103);
    j.show();

    j.del_job();
    j.show();

    j.del_job();
    j.show();

    return 0;
}