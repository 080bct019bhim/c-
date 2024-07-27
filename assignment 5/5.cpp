
/*
Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by
overloading binary * operator.
*/
#include<iostream>
using namespace std;
class matrices{
        double arr[3][3];
        static int k;
    public:
        void setData()
        {
            cout<<"Enter the matrix "<<++k<<" elements : "<<endl;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cin>>arr[i][j];
                }
            }
        }

        matrices operator*(matrices &m)
        {
            matrices temp=*this;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    temp.arr[i][j]=0;
                }
            }
            for(int i=0;  i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    for(int k=0;  k<3; k++)
                    {
                        temp.arr[i][j]=temp.arr[i][j]+arr[i][k]*arr[k][j];
                    }
                }
            }
            return  temp;
        }
        
        void showData()
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0;  j<3; j++)
                    cout<<arr[i][j];
                cout<<endl;
            }
        }
};
int matrices::k;
int main()
{
    matrices m1,m2,m3;
    m1.setData();
    m2.setData();
    m3=m1*m2;
    cout<<endl<<"Multiplied matrix : "<<endl;
    m3.showData();
    return 0;
}