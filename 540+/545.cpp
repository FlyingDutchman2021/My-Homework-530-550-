#include <iostream>
using namespace std;

class Addition{
    public:
    int num1,num2;

    Addition(int input1, int input2){
        num1 = input1;
        num2 = input2;
    }

    int showAddition(){
        return num1 + num2;
    }
};


int main(){

    int a,b;
    cin>>a>>b;
    Addition add(a,b);
    cout<<add.showAddition()<<endl;

    return 0;
}