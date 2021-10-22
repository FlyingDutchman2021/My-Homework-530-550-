#include <iostream>
using namespace std;

int main(){

int num,output;
cin>>num;

output = num % 2;

if (output==0){
    cout<<"The integer "<<num<<" is even."<<endl;
}

else{
    cout<<"The integer "<<num<<" is odd."<<endl;
}
    return 0;
}