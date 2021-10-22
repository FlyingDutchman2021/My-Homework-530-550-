#include <iostream>
using namespace std;

class Student{
    public:
    string firstName,lastName;
    int ID,scholarship;

    string getFirstName(){
        return firstName;
    }

    string getLastName(){
        return lastName;
    }

    int getID(){
        return ID;
    }

    int getScholarship(){
        return scholarship;
    }

    void setFirstName(string input){
        firstName=input;
    }

    void setLastName(string input){
        lastName=input;
    }

    void setID(int input){
        if (input<0){
            ID = 0;
        }else{
            ID = input;
        }
    }

    void setScholarship(int input){
        if (input < 0){
            scholarship=0;
        }else{
            scholarship=input;
        }
    }

    Student(string inFirstName, string inLastName, int inID, int inScholarship){
        setFirstName(inFirstName);
        setLastName(inLastName);
        setID(inID);
        setScholarship(inScholarship);
    }


    


};


int main(){

    string firstName, lastName;
    int ID, scholarship;

    cin>>firstName>>lastName>>ID>>scholarship;
    Student no1(firstName,lastName,ID,scholarship);
    cin>>firstName>>lastName>>ID>>scholarship;
    Student no2(firstName,lastName,ID,scholarship);

    cout<<no1.getFirstName()<<" "<<no1.getLastName()<<endl<<no1.getID()<<" "<<no1.getScholarship()<<endl;
    cout<<no2.getFirstName()<<" "<<no2.getLastName()<<endl<<no2.getID()<<" "<<no2.getScholarship()<<endl;

    scholarship=no1.getScholarship();
    no1.setScholarship(scholarship*1.1);
    cout<<no1.getScholarship()<<endl;

    scholarship=no2.getScholarship();
    no2.setScholarship(scholarship*1.1);
    cout<<no2.getScholarship()<<endl;


    return 0;
}