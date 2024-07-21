#include<iostream>
using namespace std;
class Complex{
    double real, imag;
    public:
    Complex(int x=0, int y=0):real(x),imag(y){}
    void setData(int real, int imag){this->real=real; this->imag=imag;}
    void showData(){    cout<<endl<<real<<" + "<<imag<<"i";  }
    friend Complex add(Complex&, Complex&);
};
Complex add(Complex& a, Complex& b)
    {
        Complex temp;
        temp.real=a.real+b.real;
        temp.imag=a.imag+b.imag;
        return temp;
    }
int main()
{
    Complex c1(2,3),c2,c3;
    c2.setData(4,3);
    c3=add(c1,c2);
    c3.showData();
    return 0;
}