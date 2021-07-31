#include<iostream>
using namespace std;
void swapref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
int x=8,y=9;
swapref(x,y);
cout<<x<<y;
return 0;
}