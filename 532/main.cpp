#include <iostream>
using namespace std;

int main(){

int num1=0,num2=0,num3=0;

cin>>num1>>num2>>num3;

cout<<"Sum is "<< num1 + num2 + num3<<endl;
cout<<"Average is "<< (num1 + num2 + num3)/3<<endl;
cout<<"Product is "<< num1*num2*num3<<endl;

if (num1<=num2 && num1<=num3){
cout<<"Smallest is "<<num1<<endl;
}else if (num2<=num1 && num2 <= num3){
    cout<<"Smallest is "<<num2<<endl;
}else if (num3<=num2 && num3<=num1){
    cout<<"Smallest is "<<num3<<endl;
}


if (num1>=num2 && num1>=num3){
cout<<"Largest is "<<num1<<endl;
}else if (num2>=num1 && num2 >= num3){
    cout<<"Largest is "<<num2<<endl;
}else if (num3>=num2 && num3>=num1){
    cout<<"Largest is "<<num3<<endl;
}

    return 0;
}