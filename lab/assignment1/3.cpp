#include<iostream>

using namespace std;

double SchoolTotalMonthlyFee(double, double=3000, double=3000);

int main()

{
    double primarySchoolTutuionFee=5000;
    double secondarySchoolTutuionFee=8000;
    double highSchoolTutuionFee=10000;

    double primarySchoolTransportationFee=2000;
    double highSchoolTransportationFee=3000;

    double highSchoolLunchFee=0;




    cout<<"Total monthly Fee of Primary school: "<<SchoolTotalMonthlyFee(primarySchoolTutuionFee,primarySchoolTransportationFee)<<endl;
    cout<<"Total monthly Fee of secondary school: "<<SchoolTotalMonthlyFee(secondarySchoolTutuionFee)<<endl;
    cout<<"Total monthly Fee of high school: "<<SchoolTotalMonthlyFee(highSchoolTutuionFee,highSchoolTransportationFee,highSchoolLunchFee)<<endl;

    return 0; 
}

double SchoolTotalMonthlyFee(double SchoolTutuionFee, double SchoolTransportationFee, double SchoolLunchFee)
{
    return SchoolTutuionFee+SchoolTransportationFee+SchoolLunchFee;
}
