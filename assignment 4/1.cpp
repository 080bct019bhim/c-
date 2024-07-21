#include<iostream>
using namespace std;
class Complex{
    double real, imag;
    public:
    Complex(int x=0, int y=0):real(x),imag(y){}
    void setData(int real, int imag){this->real=real; this->imag=imag;}
    void showData(){    cout<<endl<<real<<" + "<<imag<<"i";  }
    Complex add(Complex b)
    {
        real+=b.real;
        imag+=b.imag;
        return *this;
    }
};
int main()
{
    Complex c1(2,3),c2,c3;
    c2.setData(4,5);
    c3=c1.add(c2);
    c3.showData();
    c1.showData();
    return 0;
}