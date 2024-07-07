#include<iostream>
using namespace std;
class vehicle{
    char modelNumber[20];
    char modelName[20];
    double cost;
    public:
    void setmodelNumber()
    {
        cin>>modelNumber;
    }
    void setmodelName()
    {
        cin>>modelName;
    }
    void setcost()
    {
        cin>>cost;
    }
    void showData()
    {
        cout<<"Model number : "<<modelNumber<<" , Model name : "<<modelName<<" , cost : "<<cost<<endl;
    }
};
int main()
{
    vehicle v1,v2;
    cout<<"Enter Model number, model name, cost of first vehicle : ";
    v1.setmodelNumber();
    v1.setmodelName();
    v1.setcost();
    cout<<"Enter Model number, model name, cost of second vehicle : ";
    v2.setmodelNumber();
    v2.setmodelName();
    v2.setcost();
    cout<<"\n\n\n For first vehicle : \n";
    v1.showData();
    cout<<"\n\n\n For second vehicle : \n";
    v2.showData();
    return 0;
}
