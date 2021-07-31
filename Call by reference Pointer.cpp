#include<iostream>
using namespace std;
void swappointer(int*a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
int x=8, y=9;
swappointer(&x, &y);
cout<<x<<y;
return 0;
}