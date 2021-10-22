#include <iostream>
using namespace std;




class Account {

    public:

       int Bal;

       Account (int iniBal)
       
       {
           if (iniBal<0){
               cout<<"Error: Initial balance cannot be negative."<<endl;
           }else{
               Bal = iniBal;
           }
        }


       void credit(int addBal)
       {
           Bal = Bal + addBal;
       }



       void debit(int debitBal)
       {
           if (debitBal>Bal){
               cout<<"Debit amount exceeded account balance."<<endl;
           }else{
            Bal = Bal-debitBal;
           }
       }


       int getBalance(){
          return Bal;
       }
};










int main(){

   int initialBalance_1;
   int initialBalance_2;
   cin >> initialBalance_1 >>initialBalance_2;

   Account account1( initialBalance_1 ); 
   Account account2( initialBalance_2 ); 

   int withdrawalAmount; 

   cin >> withdrawalAmount; 
   account1.debit( withdrawalAmount );
   cout << "account1 balance: $" << account1.getBalance() << endl;

   cin >> withdrawalAmount; 
   account2.debit( withdrawalAmount ); 
   cout << "account2 balance: $" << account2.getBalance() << endl;



    return 0;
}


