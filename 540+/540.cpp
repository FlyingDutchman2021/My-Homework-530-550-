#include <iostream>
using namespace std;

class Invoice {
     public:
          string partNum, partDescription;
          int quantity, price;

          Invoice (string num,string des,int inputCount,int inputPrice){
              if (inputCount < 0){
                  cout<<"quantity cannot be negative. quantity set to 0."<<endl;
                  quantity=0;
              }else{quantity=inputCount;}

              if(inputPrice<0){
                  cout<<"pricePerItem cannot be negative. pricePerItem set to 0."<<endl;
                  price=0;
              }else{
                  price=inputPrice;
              }

              partNum=num;
              partDescription=des;
          }


          string getPartNumber(){
              return partNum;
          }

          int getQuantity(){
              return quantity;
          }

          string getPartDescription(){
              return partDescription;
          }

          int getPricePerItem(){
              return price;
          }

          int getInvoiceAmount(){
              return price * quantity;
          }



          void setPartNumber(string inputPartNumber){
              partNum=inputPartNumber;
          }

          void setPartDescription(string inputPartDescription){
              partDescription=inputPartDescription;
          }

          void setQuantity(int inputQuantity){
              if (inputQuantity<0){
                  cout<<"quantity cannot be negative. quantity set to 0."<<endl;
                  quantity=0;
              }else{
                  quantity=inputQuantity;
                  }




              
          }

          void setPricePerItem(int inputPrice){
             if (inputPrice<0){
                 cout<<"pricePerItem cannot be negative. pricePerItem set to 0."<<endl;
                 price=0;
             }else{
                 price=inputPrice;
                  
                 }
          }


};



int main()
{
   string number;
   string description;
   int count;
   int price;
   cin>> number>>description>>count>>price;
   Invoice invoice(number, description, count,price); 

   // display the invoice data members and calculate the amount
   cout << "Part number: " << invoice.getPartNumber() << endl;
   cout << "Part description: " << invoice.getPartDescription() << endl;
   cout << "Quantity: " << invoice.getQuantity() << endl;
   cout << "Price per item: $" << invoice.getPricePerItem() << endl;
   cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

   cin>> number>>description>>count>>price;
   invoice.setPartNumber( number );
   invoice.setPartDescription( description );
   invoice.setQuantity( count ); // negative quantity, so quantity set to 0 
   invoice.setPricePerItem( price );

   // display the modified invoice data members and calculate new amount
   cout << "Part number: " << invoice.getPartNumber() << endl;
   cout << "Part description: " << invoice.getPartDescription() << endl;
   cout << "Quantity: " << invoice.getQuantity() << endl;
   cout << "Price per item: $" << invoice.getPricePerItem() << endl;
   cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;
} // end main