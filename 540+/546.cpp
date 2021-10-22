#include <iostream>
using namespace std;

class Animal{
    private:
    int age;
    string name,extra;

    public:

    Animal(string inputName, int inputAge, string inputExtra){
        name=inputName;
        age=inputAge;
        extra=inputExtra;
    }

    string showName(){
        return name;
    }

    int showAge(){
        return age;
    }

    string showExtra(){
        return extra;
    }

    void setName(string inputName){
        name = inputName;
    }

    void setAge(int inputAge){
        age = inputAge;
    }

    void setExtra(string inputExtra){
        extra = inputExtra;
    }
};

int main(){

    int age;
    string name, extra;
    cin>>name>>age>>extra;
    Animal animal(name,age,extra);
    cout<<animal.showName()<<endl;
    cout<<animal.showAge()<<endl;
    cout<<animal.showExtra()<<endl;
    cin>>name>>age>>extra;
    animal.setAge(age);
    animal.setName(name);
    animal.setExtra(extra);
    cout<<animal.showName()<<endl;
    cout<<animal.showAge()<<endl;
    cout<<animal.showExtra()<<endl;

    return 0;
}