#include<iostream>
using namespace std;
float moneyrecieved(float currentmoney,float factor = 1.04){
    return currentmoney * factor;
}

int main(){
    float money = 10000;
    cout<<moneyrecieved(money);
return 0;
}