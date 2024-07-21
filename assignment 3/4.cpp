#include<iostream>
using namespace std;
class Complex{
        double real,imag;
    public:
        Complex(int x=0, int y=0):real(x),imag(y){  cout<<endl<<"This is constructor for complex no : "; showData();    }
        void setData(int x, int y)
        {
            real=x;
            imag=y;
        }
        Complex(Complex& temp)
        {
            real=temp.real;
            imag=temp.imag;
            cout<<endl<<"This is copy constructor for complex no : ";
            showData();
        }
        void showData()
        {
            cout<<real<<" + "<<imag<<"i";
        }
        ~Complex(){cout<<endl<<"This is desructor of Complex no : ";showData();}
};
int main()
{
    Complex c1(2,3),c2(4,5);
    Complex c3=c2;
    return 0;
}