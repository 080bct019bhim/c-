#include<iostream>
using namespace std;
class Complex{
        double real,imag;
    public:
        Complex(int x=0, int y=0):real(x),imag(y){}
        void setData(int x, int y)
        {
            real=x;
            imag=y;
        }
        Complex(Complex& temp)
        {
            real=temp.real;
            imag=temp.imag;
        }
        void showData()
        {
            cout<<endl<<real<<" + "<<imag<<"i"<<endl;
        }
        ~Complex(){cout<<endl<<"This is desructor for complex no : "; showData();}
};
int main()
{
    Complex c1(2,3),c2;
    c2.setData(2,4);
    Complex c3=c2;
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}