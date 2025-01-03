#include<iostream>
using namespace std;

char stack[10];
int top=-1;

void push(int val)
{
    top++;
    stack[top]=val;
}

int pop()
{
    int val=stack[top];
    top--;
    return val;
}

void postfixeval()
{
    int j;
    char postfix[20];

    int operand1;
    int operand2;

    cout<<"\n\n\tEnter postfix string:";
    cin>>postfix;

    for(j=0;postfix[j]!='\0';j++)
    {
        if(postfix[j]=='a'||postfix[j]=='b'||postfix[j]=='c'||postfix[j]=='d')
        {
            switch(postfix[j])
            {
                case 'a':push(2);
                break;
                case 'b':push(4);
                break;
                case 'c':push(6);
                break;
                case 'd':push(8);
                break;
            }
        }
        else
        {
            operand2=pop();
            operand1=pop();

            switch(postfix[j])
            {
                case '+':push(operand1 + operand2);
                break;
                case '-':push(operand1 - operand2);
                break;
                case '*':push(operand1 * operand2);
                break;
                case '/':push(operand1 / operand2);
                break;
            }
        }
    }
    cout<<"\n\n\t Postfix expression evaluation:\n\n\t"<<pop();
}
int main()
{

    cout<<"Expression Evaluation:\n\n";

    cout<<"\n\n Operand : Value";
    cout<<"\n\t a : 2";
    cout<<"\n\t b : 4";
    cout<<"\n\t c : 6";
    cout<<"\n\t d : 8";

    postfixeval();

    return 0;
}
