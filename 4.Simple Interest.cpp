#include<iostream>
using namespace std;
int main(){
    float p,t,r;
    float SI;
    cout<<"enter principle interest, time and rate";
    cin>>p>>t>>r;
    SI = (p * t * r)/100;
    cout<<"simple interest is "<<SI; 
return 0;
}