#include<iostream>
using namespace std;
int main(){
int mth,phy,che,it,eng,sum,totalmark=50;
cout<<"enter marks for math";
cin>>mth;
cout<<"enter marks for Physics";
cin>>phy;
cout<<"enter marks for chemestry";
cin>>che;
cout<<"enter marks for IT";
cin>>it;
cout<<"enter marks for english";
cin>>eng;
cout<<"enter total mark";
cin>>totalmark;
int sum =phy+che+mth+it+eng; 
int percentage= (sum / totalmark) * 100;
cout<<"percentage is"<<percentage;
return 0;
}