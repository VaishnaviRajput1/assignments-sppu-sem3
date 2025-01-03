#include<iostream>
using namespace std;

class stackop{
char stack[10];
int top=-1;

public:
void expcon()
{
    char infix[20];
    char postfix[20];
    int i=0;
    int j=0;

    cout<<"Enter infix expression:\n\n\t";
    cin>>infix;

    for(int i=0;infix[i]!='\0';i++)
    {
        if(infix[i]=='('||infix[i]=='['||infix[i]=='{')
        {
            top++;
            stack[top]=infix[i];
        }
        else if(infix[i]=='a'||infix[i]=='b'||infix[i]=='c'||infix[i]=='d')
        {
            postfix[j]=infix[i];
            j++;
        }
        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/')
        {
            top++;
            stack[top]=infix[i];
        }
        else
        {
            switch(infix[i])
            {
                case ')':while(stack[top]!='(')
                {
                    postfix[j]=stack[top];
                    j++;
                    top--;
                }
                top--;
                break;

                case ']':while(stack[top]!='[')
                {
                    postfix[j]=stack[top];
                    j++;
                    top--;
                }
                top--;
                break;

                case '}':while(stack[top]!='{')
                {
                    postfix[j]=stack[top];
                    j++;
                    top--;
                }
                top--;
                break;

            }
        }
    }
    postfix[j]='\0';
    cout<<"\n\n\tThe Postfix expression:"<<postfix;
}
};

int main()
{
    cout<<"--------------Expression Conversion------------------\n\n\t";
    stackop s;
    s.expcon();

    return 0;
}