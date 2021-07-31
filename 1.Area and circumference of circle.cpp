#include<iostream>
using namespace std;
int main()
{
    int r;
    float circumference;
    float area;
    float pi = 3.14;

        cout<<"enter the value of r";
        cin>>r;
        circumference = 2 * pi * r;
        cout<<"circumference is"<<circumference<<endl;
    area = pi * r * r;
    cout<<"area is "<<area;
    return 0;
}