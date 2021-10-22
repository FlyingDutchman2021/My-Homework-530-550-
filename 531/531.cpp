#include <iostream>
using namespace std;

int main(){


int num1=0, num2=0;
cin>>num1>>num2;

if (num1 == num2){
    cout<<"These numbers are equal.";
}else if (num1 > num2){
    cout<<num1<<" is larger.";
}else if (num2 > num1){
    cout<<num2<<" is larger.";
}

    return 0;
}