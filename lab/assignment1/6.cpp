#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cout<<"Enter the size of array : ";
    cin>>N;
    if(N<0)
    N=-N;
    double sum=0,*ptr=new double[N];
    if(!N)
    {
        cout<<"Memory Allocation Failed ";
        return 0;
    }
    for(i=0; i<N; i++)
    {
        cout<<"Enter "<<(i+1)<<" position number : ";
        cin>>ptr[i];
        sum+=ptr[i];
    }
    cout<<"\nSum : "<<sum;
    cout<<"\nAvg : "<<sum/N;
}
