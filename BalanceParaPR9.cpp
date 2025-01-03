#include<iostream>
using namespace std;

class stackop
{
    char stack[10];

    public:
    void  checkbalpara()
    {
        char ch,expr[20];
        int i,flag;
        int top=-1;

        cout<<"Enter the expression:";
        cin>>expr;
        flag=0;

        for(int i=0;expr[i]!='\0';i++)
        {
            if(expr[i]=='('||expr[i]=='['||expr[i]=='{')
            {
                top++;
                stack[top]=expr[i];
            }
            else if(expr[i]==')'||expr[i]==']'||expr[i]=='}')
            {
                ch=stack[top];
                top--;

                switch(expr[i])
                {
                case ')':if(ch!='(')
                            flag=1;
                            break;
                case ']':if(ch!='[')
                            flag=1;
                            break;
                case '}':if(ch!='{')
                            flag=1;
                            break;
                default:
                cout<<"Invalid bracket";
                }

                if(flag==1)
                break;
                else
                {
                    //ignore operators and operands
                }
            }
        }
        cout<<"Flag:"<<flag;
        cout<<"Top:"<<top;

        if(top!=-1||flag==1)
            cout<<"The expression is not well parenthisized";
        else
        cout<<"The expression is well parenthisized";

    }
};

int main()
{
    stackop s;

    s.checkbalpara();
    return 0;
}