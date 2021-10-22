#include <iostream>
using namespace std;

int main(){

int num1=0,num2=0, output;
cin>>num1>>num2;
output= num1 % num2;

if (output==0){
    cout<<num1<<" is a multiple of "<<num2;
    }
else {
    cout<<num1<<" is not a multiple of "<<num2;
    }
    return 0;
}