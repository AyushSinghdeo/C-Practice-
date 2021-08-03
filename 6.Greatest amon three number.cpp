#include<iostream>
using namespace std;
int main(){
    int a,b,c;
cout<<"enter three number";
cin>>a>>b>>c;
if(a>b && a>c){
    cout<<"greatest is"<<a<<endl;
}
    else if(b>c && b>a){
        cout<<"greatest is "<<b<<endl;
    }
    else(c>a && c>b){
        cout<<"greatest is"<<c;
    }
return 0;
}