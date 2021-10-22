#include <iostream>
using namespace std;


class Person {
    private:
    string lastName; 
    string firstName;

    public:
    Person(){

    }

    void setName(string inFirstName, string inLastName){
        firstName = inFirstName;
        lastName = inLastName;
    }



    void orderedShow() const{
        cout<<firstName<<" "<<lastName<<endl;
    }; 
    void inorderShow() const{
        cout<<lastName<<" "<<firstName<<endl;
    }; 
};

int main(){

    bool continueOrNot=true;

    Person myperson[99];
    
    int counter=0;
    string indicator, firstName, lastName;

    while (continueOrNot == true){
        //input
        cin>>indicator;

        //verify
        if (indicator == "y"){
            //Load in
            cin>>firstName>>lastName;
            myperson[counter].setName(firstName,lastName);
            counter += 1;
        }else{
            //exit
            continueOrNot = false;
        }
    }


    //output value

    for (int i = 0; i < counter; i++)
    {
        myperson[i].inorderShow();
        myperson[i].orderedShow();
    }
    

    return 0;
}