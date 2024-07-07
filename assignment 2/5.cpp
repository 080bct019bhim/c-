#include<iostream>
using namespace std;
class vehicle{
    public:
    char modelNumber[20];
    char modelName[20];
    double cost;
};
int main()
{
    vehicle v1,v2;
    cout<<"Enter Model number, model name, cost of first vehicle : ";
    cin>>v1.modelNumber>>v1.modelName>>v1.cost;
    cout<<"\nEnter Model number, model name, cost of second vehicle : ";
    cin>>v2.modelNumber>>v2.modelName>>v2.cost;
    cout<<"For first vehicle:\n"<<v1.modelNumber<<endl<<v1.modelName<<endl<<v1.cost<<endl;
    cout<<"\nFor second vehicle:\n"<<v2.modelNumber<<endl<<v2.modelName<<endl<<v2.cost;
    return 0;
}