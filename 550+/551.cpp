#include <iostream>
#include <iomanip>
using namespace std;



    






    void setChangesAndJudge(int inID, double inBalance, double inCharges, double inCredits, double inCreditLimit){
        
        double balance;
        int ID;

        if (inID >0){
            ID = inID;
        }

        balance = inBalance + inCharges - inCredits;


        cout<<fixed<<showpoint<<setprecision(2)<<"New balance is "<<balance<<endl;
        if (balance > inCreditLimit){
            cout<<"Account: "<<ID<<endl;
            cout<<"Credit limit: "<<inCreditLimit<<endl;
            cout<<"Credit Limit Exceeded."<<endl;
        }


    }




int main(){

    bool continueOrNot = true;
    int accountNumber[99];
    double balance[99],charges[99],credits[99],creditLimits[99];
    int counter = 0;

    while (continueOrNot == true){
        cin>>accountNumber[counter];
        if (accountNumber[counter] != -1){
            cin>>balance[counter]>>charges[counter]>>credits[counter]>>creditLimits[counter];
            counter += 1;

        }else{
            continueOrNot = false;
        }
    }


    for (int i = 0; i < counter; i++)
    {
        setChangesAndJudge(accountNumber[i], balance[i],charges[i],credits[i],creditLimits[i]);
    }
    


    return 0;
}