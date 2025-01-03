#include<iostream>
using namespace std;

class Complex
{
    private:
    int real,img;

    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }

    Complex operator+(Complex c1)
    {
        Complex c3;
        c3.real=real+c1.real;
        c3.img=img+c1.img;
        return c3;
    }

    Complex operator*(Complex c2)
    {
        Complex c3;
        c3.real=(real*c2.real - img*c2.img);
        c3.img=(real*c2.img + img*c2.real);
        return c3;
    }

    friend void operator>>(istream &in,Complex &c)
    {
        cout<<"Enter real part:\n";
        in>>c.real;
        cout<<"Enter imaginary part:\n";
        in>>c.img;
    }

    friend void operator<<(ostream &out,Complex &c)
    {
        out<<c.real<<"+"<<c.img<<"i";
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
};

int main()
{
    int n;
    cout<<"Enter 1 to add\n";
    cout<<"Enter 2 to multiply\n";
    cin>>n;

        Complex c1,c2,c3;
        cout<<"Enter first complexx num:\n";
        cin>>c1;
        cout<<"Enter second complexx num:\n";
        cin>>c2;

        switch(n)
        {
            case 1:
            {
                c3=c2+c1;
                cout<<"Answer:"<<c3;
                break;
            }
            case 2:
            {
                c3=c1*c2;
                cout<<"Answer:"<<c3;
                break;
            }
            default:
            {
                cout<<"Invalid Input";
            }
        }
        return 0;
}