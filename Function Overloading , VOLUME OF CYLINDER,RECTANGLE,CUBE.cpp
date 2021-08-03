#include<iostream>
using namespace std;
int Volume(double r,float h)
{
    return 3.14 * r * r * h;
}
int Volume(int a){
    return a * a * a;  
}
int Volume(float l, float b, float h){
    return l * b * h;
}


int main(){
cout<<"The volume of cuboid of 3, 7 and 6 is "<<Volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<Volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<Volume(3)<<endl;
    return 0;
}